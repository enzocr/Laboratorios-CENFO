/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Validaciones;

import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javax.swing.JLabel;
import javax.swing.JTextField;
import objetos.Caso;

/**
 *
 * @author enzoq
 */
public class Validacion {

    public static boolean textFieldNotEmpty(TextField texto) {

        boolean r = false;

        if (texto.getText() != null && !texto.getText().isEmpty()) {
            r = true;
        }
        return r;

    }

    public static boolean textFieldNotEmpty(JTextField texto) {

        boolean r = false;

        if (texto.getText() != null && !texto.getText().isEmpty()) {
            r = true;
        }
        return r;

    }

    public static boolean textFieldNotEmpty(TextField texto, Label label, String textoValidar) {
        boolean r = true;
        String c = null;
        if (!textFieldNotEmpty(texto)) {
            r = false;
            c = textoValidar;

        }

        label.setText(c);
        return r;

    }

    public static boolean textFieldNotEmpty(JTextField texto, JLabel label, String textoValidar) {
        boolean r = true;
        String c = null;
        if (!textFieldNotEmpty(texto)) {
            r = false;
            c = textoValidar;

        }

        label.setText(c);
        return r;

    }

    public static boolean labelExitoso(Label label, String textoValidar) {
        boolean r = true;
        String c = null;
        label.setText(textoValidar);
        return r;
    }

    public static boolean labelExitoso(JLabel label, String textoValidar) {
        boolean r = true;
        String c = null;
        label.setText(textoValidar);
        return r;
    }

    public boolean actualizarEstado(Caso caso, String estadoNuevo) {

        String estadoActual = caso.getEstado().toLowerCase();
        String nuevo = estadoNuevo.toLowerCase();

        if (estadoActual.equals("recibido") && nuevo.equals("aceptado")) {
            //se registra en la base de datos, en una tabla intermedia,
            //el caso, se le manda el estado actual y el estado nuevo
            //con la fecha en la que se actualizo
            //y se le hace update el estado al caso en la tabla de casos

            // caso.setEstado("aceptado");
            return true; //si retorna true quiere decir que es valido el cambio 
            //////////////y se realizo con exito
        }
        if (estadoActual.equals("recibido") && nuevo.equals("consulta")) {
            caso.setEstado("consulta");
            return true;
        }
        if (estadoActual.equals("recibido") && nuevo.equals("rechazado")) {
            caso.setEstado("rechazado");
            return true;
        }
        if (estadoActual.equals("aceptado") && nuevo.equals("redactado")) {
            caso.setEstado("redactado");
            return true;
        }
        if (estadoActual.equals("redactado") && nuevo.equals("resuelto")) {
            caso.setEstado("resuelto");
            return true;
        }
        if (estadoActual.equals("redactado") && nuevo.equals("revision")) {
            caso.setEstado("revision");
            return true;
        }
        if (estadoActual.equals("revision") && nuevo.equals("redactado")) {
            caso.setEstado("redactado");
            return true;
        } else {
            return false;
        }

    }

}
