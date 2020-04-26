/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package multis;

import accesoDatos.Conector;
import java.sql.ResultSet;
import objetos.Querellante;

/**
 *
 * @author enzoq
 */
public class MultiQuerellante {

    public void crearQuerellante(String primerNombre,String segundoNombre,String primerApellido,
        String segundoApellido,String telefono,String cedula,String direccion){
       
         String query;
        query = "EXECUTE [dbo].[pa_registrar_querellante] '" +primerNombre+ "','" 
                +segundoNombre+ "','" +primerApellido+ "','" +segundoApellido+ 
                "','" +telefono+ "','" +direccion+ "','" +cedula+ "'";
                
        
         try {
            Conector.getConector().ejecutarSQL(query);

        } catch (Exception ex) {
            ex.getMessage();
        }
    }
    public boolean iniciarSesion(String cedula){
       boolean encontrado = false;
        String query;
        query = "SELECT * FROM Querellante where cedula = '" + cedula +"'";

        try {
            ResultSet rs = Conector.getConector().ejecutarSQL(query, true);

            while (rs.next()) {

                if (cedula == null ? rs.getString("cedula") == null : cedula.equals(rs.getString("cedula"))) {
                    encontrado = true;
                }
            }
        } catch (Exception ex) {
            ex.getMessage();
        }

        return encontrado;
    }

    public boolean buscarQuerellanteCedula(String cedula) {
        boolean encontrado = false;
        
        String query;
        query = "SELECT * "
                + "FROM Querellante "
                + "WHERE cedula='" + cedula + "'";
       
        try {
            ResultSet rs = Conector.getConector().ejecutarSQL(query, true);

            while (rs.next()) {

                if (cedula == null ? rs.getString("cedula") == null : cedula.equals(rs.getString("cedula"))) {
                    encontrado = true;
                }
            }
        } catch (Exception ex) {
            ex.getMessage();
        }

        return encontrado;
    }

}
