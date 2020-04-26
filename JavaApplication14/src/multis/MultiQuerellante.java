/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package multis;

import AccesoDatos.Conector;
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

    public Querellante buscarQuerellanteCedula(String cedula) throws java.sql.SQLException, Exception {
        Querellante querellante = null;
        java.sql.ResultSet rs;
        String query;
        query = "SELECT * "
                + "FROM Querellante "
                + "WHERE cedula='" + cedula + "';";
        rs = Conector.getConector().ejecutarSQL(query, true);
        if (rs.next()) {
            querellante = new Querellante();
        } else {
            throw new Exception("El Querellante no está registrado en el sistema.");
        }
        rs.close();
        return querellante;
    }

}
