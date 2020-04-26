package capaLogica;


import java.util.HashSet;

/**
 *
 * @author Enzo Quartino Zamora
 */
public interface IMessageObject {

    /**
     * El método devuelve un entero que indica si el mensaje fue enviado de
     * forma exitosa o no. En su aplicación, cuando se envía un mensaje debe
     * almacenarse en el outbox.
     *
     * @param m
     * @return
     */
    int enviar(Mensaje m);

    /**
     * ) El método devuelve un entero que indica si el mensaje fue recibido o
     * no. En su aplicación, cuando se reciben los mensajes, éstos deben ser
     * almacenados en el inbox.
     *
     * @param email
     * @param lista
     * @return
     */
     public HashSet<Mensaje> recibir(Correo email);
}
