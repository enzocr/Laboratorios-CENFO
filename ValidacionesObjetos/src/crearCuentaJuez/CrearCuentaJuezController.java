/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package crearCuentaJuez;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import validacionesTexto.Validaciones;

/**
 * FXML Controller class
 *
 * @author enzoq
 */
public class CrearCuentaJuezController implements Initializable {

    /**
     * Initializes the controller class.
     */
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
            boolean primerNombre = Validaciones.textFieldNotEmpty(txtPrimerNombre, lblPrimerNombre, "Nombre requerido");
            boolean primerApellido = Validaciones.textFieldNotEmpty(txtPrimerApellido, lblPrimerApellido, "Apellido requerido");
            boolean telefono = Validaciones.textFieldNotEmpty(txtTelefono, lblTelefono, "Telefono requerido");
            boolean cedula = Validaciones.textFieldNotEmpty(txtCedula, lblCedula, "Cedula requerida");
            boolean sala = Validaciones.textFieldNotEmpty(txtSala, lblSala, "Sala Requerida");
            boolean usuario = Validaciones.textFieldNotEmpty(txtUsuario, lblUsuario, "Usuario requerido");
            boolean clave = Validaciones.textFieldNotEmpty(txtClave, lblClave, "Clave Requerida");
            if (primerNombre && primerApellido && telefono && cedula && sala && usuario && clave) {

                //gestor.registrarJuez(....);
                boolean registro = Validaciones.labelExitoso(registroExitoso, "Juez Registrado");
                centinela = true;
            } else {
                boolean registro = Validaciones.labelExitoso(registroExitoso, "Tiene que llenar los campos requeridos");
                centinela = false;
            }

        } while (centinela != true);

    }

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }

}
