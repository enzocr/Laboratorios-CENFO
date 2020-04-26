package multis;

import AccesoDatos.Conector;
import objetos.Secretario;

/**
 *
 * @author enzoq
 */
public class MultiSecretario {

    public void crearSecretario(String primerNombre,String segundoNombre,
            String primerApellido,String segundoApellido,String telefono,String usuario,
            String clave) throws java.sql.SQLException, Exception {
        
        String query;
        query = "EXECUTE [dbo].[pa_registrar_secretario] '" +primerNombre+ "',"
                + "'" +segundoNombre+ "','" +primerApellido+ "','" +segundoApellido
                + "','" +telefono+ "','" +clave+ "','" +usuario+ "'";
        
         try {
            Conector.getConector().ejecutarSQL(query);

        } catch (Exception ex) {
            ex.getMessage();
        }
    }

    public Secretario buscarSecretarioCedula(String cedula) throws java.sql.SQLException, Exception {
        Secretario secretario = null;
        java.sql.ResultSet rs;
        String query;
        query = "SELECT * "
                + "FROM Secretario "
                + "WHERE cedula='" + cedula + "';";
        rs = Conector.getConector().ejecutarSQL(query, true);
        if (rs.next()) {
            secretario = new Secretario();
        } else {
            throw new Exception("El secretario no está registrado en el sistema.");
        }
        rs.close();
        return secretario;
    }

}
