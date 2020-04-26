/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gestores;

import multis.MultiQuerellante;

/**
 *
 * @author enzoq
 */
public class GestorQuerellante {

    static MultiQuerellante multi = new MultiQuerellante();
    
    public void registrarQuerellante(String primerNombre,String segundoNombre,String primerApellido,
        String segundoApellido,String telefono,String cedula,String direccion){
        
        multi.crearQuerellante(primerNombre, segundoNombre, primerApellido, segundoApellido, telefono, cedula, direccion);
    }
    public boolean iniciarSesion(String cedula){
        boolean encontrado = multi.iniciarSesion(cedula);
        return encontrado;
    }
    public boolean buscarQuerellante(String cedula){
        boolean encontrado = multi.buscarQuerellanteCedula(cedula);
        return encontrado;
    }
}
