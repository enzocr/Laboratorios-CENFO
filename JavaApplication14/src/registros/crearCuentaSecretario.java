/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package registros;

import Gestores.GestorSecretario;
import Validaciones.Validacion;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author enzoq
 */
public class crearCuentaSecretario {

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
    private TextField txtUsuario;
    @FXML
    private TextField txtClave;

    @FXML
    private Label asteriscoPrimerNombre;
    @FXML
    private Label asteriscoPrimerApellido;
    @FXML
    private Label asteriscoTelefono;
    @FXML
    private Label asteriscoUsuario;
    @FXML
    private Label asteriscoClave;

    @FXML
    private Label lblRegistro;

    static GestorSecretario gestorSecretario = new GestorSecretario();

    public void registrarSecretario(ActionEvent act) {
        boolean nombre = Validacion.textFieldNotEmpty(txtPrimerNombre, asteriscoPrimerNombre, "*");
        boolean apellido = Validacion.textFieldNotEmpty(txtPrimerApellido, asteriscoPrimerApellido, "*");
        boolean telefono = Validacion.textFieldNotEmpty(txtTelefono, asteriscoTelefono, "*");
        boolean usuario = Validacion.textFieldNotEmpty(txtUsuario, asteriscoUsuario, "*");
        boolean clave = Validacion.textFieldNotEmpty(txtClave, asteriscoClave, "*");

        if (nombre && apellido && telefono && usuario && clave) {
            gestorSecretario.registrarSecretario(txtPrimerNombre.getText(), txtSegundoNombre.getText(),
                    txtPrimerApellido.getText(), txtSegundoApellido.getText(), txtTelefono.getText(),
                    txtUsuario.getText(), txtClave.getText());

            Validacion.labelExitoso(lblRegistro, "SECRETARIO REGISTRADO");

        } else {
            Validacion.labelExitoso(lblRegistro, "LLENAR ESPACIOS CON ASTERISCO");
        }
    }
}
