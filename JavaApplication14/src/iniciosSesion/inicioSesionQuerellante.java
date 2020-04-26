/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package iniciosSesion;

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
public class inicioSesionQuerellante {

    @FXML
    private Label lblCedula;
    @FXML
    private TextField txtCedula;
    @FXML
    private Label lblInicioSesion;

    public void inicioSesionQuerellante(ActionEvent act) {
        GestorQuerellante gestor = new GestorQuerellante();

        boolean cedula = Validacion.textFieldNotEmpty(txtCedula, lblCedula, "* *¡Espacio obligatorio!");

        if (cedula) {
            //Querellante querellante = null;
            //querellante = gestor.buscarQuerellanteUsuario(usuario);
            //  if(querellante!=null){
            //se abre la ventana del querellante
            //}
            //else{
            //       Validacion.labelExitoso(lblInicioSesion, "Querellante no registrado en el sistema");
            //        }
        } else {
            Validacion.labelExitoso(lblInicioSesion, "Llenar campos obligatorios");
        }

    }

}
