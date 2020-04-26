package capaLogica;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author enzoq
 */
public class Mensaje {
    
    protected Correo to;
    protected Correo from;
    protected String mensaje;
    protected String asunto;

    public Mensaje(Correo to, Correo from, String mensaje, String asunto) {
        this.to = to;
        this.from = from;
        this.mensaje = mensaje;
        this.asunto = asunto;
    }

    public Correo getTo() {
        return to;
    }

    public void setTo(Correo to) {
        this.to = to;
    }

    public Correo getFrom() {
        return from;
    }

    public void setFrom(Correo from) {
        this.from = from;
    }

    public String getMensaje() {
        return mensaje;
    }

    public void setMensaje(String mensaje) {
        this.mensaje = mensaje;
    }

    public String getAsunto() {
        return asunto;
    }

    public void setAsunto(String asunto) {
        this.asunto = asunto;
    }
    
    
    
}
