package capaLogica;


import java.util.ArrayList;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author enzoq
 */
public class Correo {

    protected String nombre;
    protected String apellidos;
    protected String email;
    protected String clave;
    protected ArrayList<Mensaje> outbox;
    protected ArrayList<Mensaje> inbox;

    public Correo() {

    }

    public Correo(String nombre, String apellidos, String email, String clave) {
        this.nombre = nombre;
        this.apellidos = apellidos;
        this.email = email;
        this.clave = clave;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getApellidos() {
        return apellidos;
    }

    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getClave() {
        return clave;
    }

    public void setClave(String clave) {
        this.clave = clave;
    }

    public void agregarMensajeEnviado(Mensaje m) {
        if (isNullListaOutbox() == false) {

            outbox.add(m);
        }
    }

    public boolean isNullListaOutbox() {
        if (this.outbox == null) {
            this.outbox = new ArrayList<>();
            return false;
        } else {
            return false;
        }
    }

    public void agregarMensajeRecibido(Mensaje m) {
        if (isNullLista() == false) {
            inbox.add(m);
        }
    }

    public boolean isNullLista() {
        if (this.inbox == null) {
            this.inbox = new ArrayList<>();
            return false;
        } else {
            return false;
        }
    }

   


}
