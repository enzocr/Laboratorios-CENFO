/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package iniciosSesion;

import Gestores.GestorJuez;
import Validaciones.Validacion;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import objetos.Juez;

/**
 *
 * @author enzoq
 */
public class inicioSesionJuez {

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

    public void inicioSesionJuez(ActionEvent act) {
        GestorJuez gestor = new GestorJuez();

        boolean usuario = Validacion.textFieldNotEmpty(txtUsuario, lblUsuario, "* *¡Espacio obligatorio!");
        boolean clave = Validacion.textFieldNotEmpty(txtClave, lblClave, "*¡Espacio obligatorio!");

        if (usuario && clave) {
            //Juez juez = null;
            //juez = gestor.buscarJuezUsuario(usuario);
            //  if(juez!=null){
            //se abre la ventana de juez
            //}
            //else{
            //       Validacion.labelExitoso(lblInicioSesion, "Juez no registrado en el sistema");
            //        }
        } else {
            Validacion.labelExitoso(lblInicioSesion, "Llenar campos obligatorios");
        }

    }

}
