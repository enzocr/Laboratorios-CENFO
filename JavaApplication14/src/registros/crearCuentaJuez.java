/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package registros;

import Gestores.GestorJuez;
import Validaciones.Validacion;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author enzoq
 */
public class crearCuentaJuez {

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
    private Label asteriscoSala;
    @FXML
    private Label asteriscoUsuario;
    @FXML
    private Label asteriscoClave;
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
            
            static GestorJuez gestorJuez = new GestorJuez();

    public  void registrarJuez(ActionEvent act) {

        boolean nombre = Validacion.textFieldNotEmpty(txtPrimerNombre, asteriscoPrimerNombre, "*");
        boolean apellido = Validacion.textFieldNotEmpty(txtPrimerApellido, asteriscoPrimerApellido, "*");
        boolean telefono = Validacion.textFieldNotEmpty(txtTelefono, asteriscoTelefono, "*");
        boolean cedula = Validacion.textFieldNotEmpty(txtCedula, asteriscoCedula, "*");
        boolean sala = Validacion.textFieldNotEmpty(txtSala, asteriscoSala, "*");
        boolean usuario = Validacion.textFieldNotEmpty(txtUsuario, asteriscoUsuario, "*");
        boolean clave = Validacion.textFieldNotEmpty(txtClave, asteriscoClave, "*");

        if (nombre && apellido && telefono && cedula && sala && usuario && clave) {
            GestorJuez gestor = new GestorJuez();
            gestor.registrarJuez(txtSala.getText(), txtClave.getText(), txtUsuario.getText(),
                    txtCedula.getText(), txtPrimerNombre.getText(), txtSegundoNombre.getText(),
                    txtPrimerApellido.getText(), txtSegundoApellido.getText(), txtTelefono.getText());
            Validacion.labelExitoso(lblRegistro, "JUEZ REGISTRADO");
//            this.setVisible(false);
//            PaginaPrincipal pp = new PaginaPrincipal();
//            pp.setVisible(true);
//            pp.setLocationRelativeTo(null);

        } else {
            Validacion.labelExitoso(lblRegistro, "LLENAR ESPACIOS CON ASTERISCO");
        }
    }
}
