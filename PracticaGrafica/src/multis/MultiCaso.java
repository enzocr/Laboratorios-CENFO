/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package multis;


import accesoDatos.Conector;
import java.time.LocalDate;
import java.util.ArrayList;
import objetos.Caso;
import objetos.Juez;
import objetos.Querellante;

/**
 *
 * @author enzoq
 */
public class MultiCaso {
    
    public void registrarCasoQuerellante(String descripcion,String cedula){
        
        String query;
        query = "EXECUTE [dbo].[pa_registrar_caso_querellante] '" + descripcion + "','"
                + cedula + "'";

        try {
            Conector.getConector().ejecutarSQL(query);

        } catch (Exception ex) {
            ex.getMessage();
        }
    }


    public Caso buscarCasoNumero(int numeroCaso) throws java.sql.SQLException, Exception {
        Caso caso = null;
        java.sql.ResultSet rs;
        String query;
        query = "SELECT * "
                + "FROM Caso "
                + "WHERE numeroCaso='" + numeroCaso + "';";
        rs = Conector.getConector().ejecutarSQL(query, true);
        if (rs.next()) {
            caso = new Caso();
        } else {
            throw new Exception("El Caso no está registrado en el sistema.");
        }
        rs.close();
        return caso;
    }

    public ArrayList<Caso> buscarCasosJuez(String usuarioJuez) throws java.sql.SQLException, Exception {
        ArrayList<Caso> listaCasosDeJuez = new ArrayList<>();
        java.sql.ResultSet rs;
        String query;
        query = "EXEC [dbo].[pa_listar_casos_juez_por_usuario] '" +usuarioJuez+ "'";
        rs = Conector.getConector().ejecutarSQL(query, true);
        while (rs.next()) {
            Querellante q = new Querellante(
                    rs.getString("direccion"),
                    rs.getString("cedula"),
                    rs.getString("nombre1"),
                    rs.getString("nombre2"),
                    rs.getString("apellido1"),
                    rs.getString("apellido2"),
                    rs.getString("telefono")
            );
            q.setIdQuerellante(rs.getInt("id_querellante"));
            Caso caso = new Caso(
            rs.getInt("id_casos"),
            rs.getString("descripcion"),
            rs.getString("estado"),
            rs.getDate("fecha").toLocalDate(),
            q   
            );
            caso.setIdCaso(rs.getInt("id_casos"));
            listaCasosDeJuez.add(caso);
        }

        rs.close();
        return listaCasosDeJuez;
    }

}
