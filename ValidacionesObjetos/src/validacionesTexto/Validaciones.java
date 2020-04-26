/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package validacionesTexto;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author enzoq
 */
public class Validaciones implements Initializable {

    @FXML
    public static boolean textFieldNotEmpty(TextField texto) {

        boolean r = false;

        if (texto.getText() != null && !texto.getText().isEmpty()) {
            r = true;
        }
        return r;

    }

    @FXML
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

    public static boolean labelExitoso(Label label, String textoValidar) {
        boolean r = true;
        String c = null;
        label.setText(textoValidar);
        return r;
    }

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

}
