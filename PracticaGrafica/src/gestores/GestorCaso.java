package gestores;

import java.util.ArrayList;
import multis.MultiCaso;
import objetos.Caso;

/**
 *
 * @author enzoq
 */
public class GestorCaso {

    static MultiCaso multi = new MultiCaso();

    public void registrarCaso(String descripcion,String cedula){
        multi.registrarCasoQuerellante(descripcion, cedula);
    }
    public ArrayList<Caso> listarCasos(String usuarioJuez) throws Exception{
        ArrayList<Caso> lista = multi.buscarCasosJuez(usuarioJuez);
        return lista;
    }
}
