/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package validacionesobjetos;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import validacionesTexto.Validaciones;

/**
 *
 * @author enzoq
 */
public abstract class FXMLDocumentController implements Initializable {

    @FXML
    private TextField txtPrimerNombre;
    @FXML
    private TextField txtSegundoNombre;
    @FXML
    private TextField txtPrimerApellido;
    @FXML
    private TextField txtSegundoApellido;
    @FXML
    private TextField txtTelefono;
    @FXML
    private TextField txtCedula;
    @FXML
    private TextField txtSala;
    @FXML
    private TextField txtUsuario;
    @FXML
    private TextField txtClave;
    @FXML
    private Label lblPrimerNombre;
    @FXML
    private Label lblPrimerApellido;
    @FXML
    private Label lblTelefono;
    @FXML
    private Label lblCedula;
    @FXML
    private Label lblSala;
    @FXML
    private Label lblUsuario;
    @FXML
    private Label lblClave;
    @FXML
    private Label registroExitoso;

    public void registrarJuez(ActionEvent event) {
        boolean centinela = false;
        do {
            boolean primerNombre = textFieldNotEmpty(txtPrimerNombre, lblPrimerNombre, "Nombre requerido");
            boolean primerApellido = textFieldNotEmpty(txtPrimerApellido, lblPrimerApellido, "Apellido requerido");
            boolean telefono = textFieldNotEmpty(txtTelefono, lblTelefono, "Telefono requerido");
            boolean cedula = textFieldNotEmpty(txtCedula, lblCedula, "Cedula requerida");
            boolean sala = textFieldNotEmpty(txtSala, lblSala, "Sala Requerida");
            boolean usuario = textFieldNotEmpty(txtUsuario, lblUsuario, "Usuario requerido");
            boolean clave = textFieldNotEmpty(txtClave, lblClave, "Clave Requerida");
            if (primerNombre && primerApellido && telefono && cedula && sala && usuario && clave) {

                //gestor.registrarJuez(....);
                boolean registro = Validaciones.labelExitoso(registroExitoso, "Juez Registrado");
                centinela = true;
            } else {
                boolean registro = Validaciones.labelExitoso(registroExitoso, "Tiene que llenar los campos requeridos");

            }

        } while (centinela != true);

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

    public static boolean labelExitoso(Label label, String textoValidar) {
        boolean r = true;
        String c = null;
        label.setText(textoValidar);
        return r;
    }

}
