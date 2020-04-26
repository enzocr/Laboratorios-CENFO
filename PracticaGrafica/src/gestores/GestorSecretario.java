/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gestores;

import multis.MultiSecretario;

/**
 
 * @author enzoq
 */
public class GestorSecretario {

    static MultiSecretario multi = new MultiSecretario();

    public void registrarSecretario(String primerNombre,String segundoNombre,
            String primerApellido,String segundoApellido,String telefono,String usuario,
            String clave){
        
        try {
            multi.crearSecretario(primerNombre,segundoNombre,primerApellido,
                    segundoApellido,telefono,usuario,clave);
        } catch (Exception ex) {
            ex.getMessage();
        }
    }
    public boolean iniciarSesion(String usuario,String clave){
       boolean encontrado = multi.iniciarSesion(usuario, clave);
       return encontrado;
    }
}
