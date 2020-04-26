package Gestores;

import multis.MultiJuez;

/**
 *
 * @author enzoq
 */
public class GestorJuez {

    static MultiJuez multi = new MultiJuez();

    public void registrarJuez(String sala, String clave, String nombreUsuario, String cedula, String primerNombre,
            String segundoNombre, String primerApellido, String segundoApellido, String telefono){
        
     new MultiJuez().crearJuez(sala, clave, nombreUsuario, cedula, primerNombre, 
                segundoNombre, primerApellido, segundoApellido, telefono);
    }
}
