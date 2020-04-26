/*mport javafx.scene.control.Label;
import javafx.scene.control.TextField;
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fxprueba;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author enzoq
 */
public class FXMLDocumentController implements Initializable {

    @FXML
    private Label label;
    @FXML
    private Label label1;
    @FXML
    private Label label2;
    @FXML
    private Label label3;
    @FXML
    private Label label4;
    @FXML
    private TextField nombreTxt;
    @FXML
    private TextField primerApellidotxt;
    @FXML
    private TextField claveTxt;
    @FXML
    private TextField usuarioTxt;
    @FXML
    private TextField cedulaTxt;

    @FXML
    private void registrarSecretario(ActionEvent event) {
        boolean nombre = textFieldNotEmpty(nombreTxt, label1, "Nombre requerido");
        boolean apellido = textFieldNotEmpty(primerApellidotxt, label2, "Primer apellido requerido");
        boolean cedula = textFieldNotEmpty(cedulaTxt, label3, "Cedula Requerida");
        boolean clave = textFieldNotEmpty(claveTxt, label, "Clave requerida");
        boolean usuario = textFieldNotEmpty(usuarioTxt, label4, "Usuario Requerido");

    }

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

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }

}
