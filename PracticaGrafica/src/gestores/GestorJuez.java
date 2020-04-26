package gestores;

import multis.MultiJuez;

/**
 *
 * @author enzoq
 */
public class GestorJuez {

    static MultiJuez multi = new MultiJuez();

    public void registrarJuez(String sala, String clave, String nombreUsuario, String cedula, String primerNombre,
            String segundoNombre, String primerApellido, String segundoApellido, String telefono){
        
        multi.crearJuez(sala, clave, nombreUsuario, cedula, primerNombre, 
                segundoNombre, primerApellido, segundoApellido, telefono);
    }
    public boolean iniciarSesion(String usuario,String clave){
       boolean encontrado = multi.iniciarSesion(usuario, clave);
       return encontrado;
    }
}
