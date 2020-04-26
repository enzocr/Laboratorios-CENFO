package capaLogica;

import java.util.ArrayList;
import java.util.HashSet;
/**
 *
 *  @author Enzo Quartino Zamora
 * 
 */
public class Gestor implements IMessageObject {

    protected ArrayList<Correo> listaCorreos;
    protected HashSet<Mensaje> listaMensajes;
    
    public Gestor() {
        this.listaCorreos = new ArrayList<>();
        this.listaMensajes = new HashSet<>();
    }

    public void agregarCorreo(String nombre, String apellidos, String email, String clave) {

        Correo miCorreo = new Correo(nombre, apellidos, email, clave);
        listaCorreos.add(miCorreo);

    }

    private boolean agregarMensaje(Mensaje m) {
        return listaMensajes.add(m);

    }

    public Correo buscarEmail(String email) {
        Correo encontrado = null;
        for (Correo elCorreo : listaCorreos) {
            if (elCorreo.getEmail().equals(email)) {
                encontrado = elCorreo;
            }
        }
        return encontrado;
    }

    public Correo buscarClave(String clave) {
        Correo encontrado = null;
        for (Correo elCorreo : listaCorreos) {
            if (elCorreo.getClave().equals(clave)) {
                encontrado = elCorreo;
            }
        }
        return encontrado;

    }

    @Override
    public int enviar(Mensaje m) {

        if (agregarMensaje(m)) {
            return 1;
        } else {
            return -1;
        }

    }
        
    @Override
    public HashSet<Mensaje> recibir(Correo email) {
        HashSet<Mensaje> mensajes = new HashSet<>();
        for (Mensaje elMensaje : listaMensajes) {
            if (elMensaje.getTo().equals(email.getEmail())) {
                mensajes.add(elMensaje);
            }

        }
        return mensajes;
    }

    public HashSet<Mensaje> recibirOutbox(Correo email) {
        HashSet<Mensaje> mensajes = new HashSet<>();
        for (Mensaje elMensaje : listaMensajes) {
            if (elMensaje.getFrom().equals(email.getEmail())) {
                mensajes.add(elMensaje);
            }
                
        }
        return mensajes;
    }

    public ArrayList<Correo> getListaCorreos() {
        return listaCorreos;
    }

    public HashSet<Mensaje> getListaMensajes() {
        return listaMensajes;
    }

    
    
}
