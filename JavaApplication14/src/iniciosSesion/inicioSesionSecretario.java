/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package iniciosSesion;

import Gestores.GestorJuez;
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
public class inicioSesionSecretario {

    @FXML
    private Label lblUsuario;
    @FXML
    private Label lblClave;
    @FXML
    private TextField txtUsuario;
    @FXML
    private TextField txtClave;
    @FXML
    private Label lblInicioSesion;

    public void inicioSesionSecretario(ActionEvent act) {
        GestorSecretario gestor = new GestorSecretario();

        boolean usuario = Validacion.textFieldNotEmpty(txtUsuario, lblUsuario, "* *¡Espacio obligatorio!");
        boolean clave = Validacion.textFieldNotEmpty(txtClave, lblClave, "*¡Espacio obligatorio!");

        if (usuario && clave) {
            //Secretario secretario = null;
            //secretario = gestor.buscarSecretarioUsuario(usuario);
            //  if(secretario!=null){
            //se abre la ventana de secretarui
            //}
            //else{
            //       Validacion.labelExitoso(lblInicioSesion, "Secretario no registrado en el sistema");
            //        }
        } else {
            Validacion.labelExitoso(lblInicioSesion, "Llenar campos obligatorios");
        }

    }

}
