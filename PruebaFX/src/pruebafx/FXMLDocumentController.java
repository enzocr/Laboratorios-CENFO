/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pruebafx;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import model.*;

/**
 *
 * @author enzoq
 */
public class FXMLDocumentController implements Initializable {

    @FXML

    private int idPersona;
    private TextField primerNombre;
    private Label nameLabel;
    private TextField segundoNombre;
    private TextField primerApellido;
    private Label apellidoLabel;
    private TextField segundoApellido;
    private TextField telefono;
    private Label telefonoLabel;

    private int idJuez;
    private TextField sala;
    private Label salaLabel;
    private TextField clave;
    private Label claveLabel;
    private TextField nombreUsuario;
    private Label usuarioLabel;
    private TextField cedula;
    private Label cedulaLabel;

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }

    public void agregarItem(ActionEvent event) {
        boolean nombreJuez = Validaciones.textFieldNotEmpty(primerNombre, nameLabel, "Nombre requerido");
        boolean apellidoJuez = Validaciones.textFieldNotEmpty(primerApellido, apellidoLabel, "Primer apellido requerido");
        boolean telefonoJuez = Validaciones.textFieldNotEmpty(telefono, telefonoLabel, "Telefono requerido");
        boolean salaJuez = Validaciones.textFieldNotEmpty(sala, salaLabel, "Sala requerida");
        boolean claveJuez = Validaciones.textFieldNotEmpty(clave, claveLabel, "Clave requerida");
        boolean usuarioJuez = Validaciones.textFieldNotEmpty(nombreUsuario, usuarioLabel, "Usuario requerido");
        boolean cedulaJuez = Validaciones.textFieldNotEmpty(cedula, cedulaLabel, "Cedula requerida");

    }

}
