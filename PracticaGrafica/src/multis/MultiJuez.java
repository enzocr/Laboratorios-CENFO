package multis;

import accesoDatos.Conector;
import java.sql.ResultSet;
import java.time.LocalDate;
import objetos.Caso;
import objetos.Historial;
import objetos.Juez;

/**
 *
 * @author enzoq
 */
public class MultiJuez {

    public void crearJuez(String sala, String clave, String nombreUsuario, String cedula, String primerNombre,
            String segundoNombre, String primerApellido, String segundoApellido, String telefono) {

        String query;
        query = "EXECUTE [dbo].[pa_registrar_juez] '" + primerNombre + "','"
                + segundoNombre + "','" + primerApellido + "','" + segundoApellido
                + "','" + telefono + "','" + sala + "','" + clave + "','" +
                nombreUsuario + "','" + cedula + "'";

        try {
            Conector.getConector().ejecutarSQL(query);

        } catch (Exception ex) {
            ex.getMessage();
        }

    }
    public boolean iniciarSesion(String usuario, String clave){
        
        boolean encontrado = false;
        String query;
        query = "SELECT * FROM Juez where usuario = '" + usuario +"'" + "and clave = " + "'"+clave+"'"; 
         

        try {
            ResultSet rs = Conector.getConector().ejecutarSQL(query, true);

            while (rs.next()) {

                if (usuario == null ? rs.getString("usuario") == null : usuario.equals(rs.getString("usuario"))
                        && clave == null ? rs.getString("clave") == null : clave.equals(rs.getString("clave"))) {
                    encontrado = true;
                }
            }
        } catch (Exception ex) {
            ex.getMessage();
        }

        return encontrado;
    }

    public Juez buscarJuezUsuario(String nombreUsuario) throws java.sql.SQLException, Exception {
        java.sql.ResultSet rs;
        Juez juez = null;
        String query;
        query = "INSERT INTO Juez"
                + "()"
                + "VALUES ('" + 1 + "'," + 2 + ",'" + 3 + "');";
        Conector.getConector().ejecutarSQL(query);
        query = "SELECT IDENT_CURRENT ('Juez') AS nuevoNumero;";

        rs = Conector.getConector().ejecutarSQL(query, true);
        if (rs.next()) {
            juez = new Juez();
        } else {
            throw new java.sql.SQLException("Error en la Base de Datos.");
        }
        rs.close();
        return juez;
    }

    

}
