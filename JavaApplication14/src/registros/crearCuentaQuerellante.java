/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package registros;

import Gestores.GestorQuerellante;
import Validaciones.Validacion;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author enzoq
 */
public class crearCuentaQuerellante {

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
    private TextField txtDireccion;

    @FXML
    private Label asteriscoPrimerNombre;
    @FXML
    private Label lblRegistro;
    @FXML
    private Label asteriscoPrimerApellido;
    @FXML
    private Label asteriscoTelefono;
    @FXML
    private Label asteriscoCedula;
    @FXML
    private Label asteriscoDireccion;
    static GestorQuerellante gestorQuerellante = new GestorQuerellante();

    public void registrarQuerellante(ActionEvent evt) {
        boolean nombre = Validacion.textFieldNotEmpty(txtPrimerNombre, asteriscoPrimerNombre, "*");
        boolean apellido = Validacion.textFieldNotEmpty(txtPrimerApellido, asteriscoPrimerApellido, "*");
        boolean telefono = Validacion.textFieldNotEmpty(txtTelefono, asteriscoTelefono, "*");
        boolean cedula = Validacion.textFieldNotEmpty(txtCedula, asteriscoCedula, "*");
        boolean direccion = Validacion.textFieldNotEmpty(txtDireccion, asteriscoDireccion, "*");

        if (nombre && apellido && telefono && cedula && direccion) {

            gestorQuerellante.registrarQuerellante(txtPrimerNombre.getText(), txtSegundoNombre.getText(),
                    txtPrimerApellido.getText(), txtSegundoApellido.getText(), txtTelefono.getText(),
                    txtCedula.getText(), txtDireccion.getText());
            Validacion.labelExitoso(lblRegistro, "QUERELLANTE REGISTRADO");
            
        }
        else {
            Validacion.labelExitoso(lblRegistro, "LLENAR ESPACIOS CON ASTERISCO");
        }
    }

}
