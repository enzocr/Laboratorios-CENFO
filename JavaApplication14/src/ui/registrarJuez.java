/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ui;

import Gestores.GestorJuez;
import Validaciones.Validacion;

/**
 *
 * @author enzoq
 */
public class registrarJuez extends javax.swing.JFrame {

    /**
     * Creates new form registrarJuez
     */
    public registrarJuez() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        scrollPane1 = new java.awt.ScrollPane();
        jLabel1 = new javax.swing.JLabel();
        btnRegistrarJuez = new javax.swing.JButton();
        txtPrimerNombreJuez = new javax.swing.JTextField();
        txtSegundoNombreJuez = new javax.swing.JTextField();
        txtPrimerApellidoJuez = new javax.swing.JTextField();
        txtSegundoApellidoJuez = new javax.swing.JTextField();
        txtTelefonoJuez = new javax.swing.JTextField();
        txtSalaJuez = new javax.swing.JTextField();
        txtCedulaJuez = new javax.swing.JTextField();
        txtUsuarioJuez = new javax.swing.JTextField();
        txtClaveJuez = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        jLabel10 = new javax.swing.JLabel();
        lblRegistro = new javax.swing.JLabel();
        asteriscoPrimerNombre = new javax.swing.JLabel();
        asteriscoPrimerApellido = new javax.swing.JLabel();
        asteriscoTelefono = new javax.swing.JLabel();
        asteriscoSala = new javax.swing.JLabel();
        asteriscoUsuario = new javax.swing.JLabel();
        asteriscoCedula = new javax.swing.JLabel();
        asteriscoClave = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("REGISTRAR JUEZ");

        btnRegistrarJuez.setText("REGISTRAR JUEZ");
        btnRegistrarJuez.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnRegistrarJuezActionPerformed(evt);
            }
        });

        txtPrimerNombreJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtPrimerNombreJuezMouseClicked(evt);
            }
        });

        txtSegundoNombreJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtSegundoNombreJuezMouseClicked(evt);
            }
        });

        txtPrimerApellidoJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtPrimerApellidoJuezMouseClicked(evt);
            }
        });

        txtSegundoApellidoJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtSegundoApellidoJuezMouseClicked(evt);
            }
        });

        txtTelefonoJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtTelefonoJuezMouseClicked(evt);
            }
        });

        txtSalaJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtSalaJuezMouseClicked(evt);
            }
        });
        txtSalaJuez.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtSalaJuezActionPerformed(evt);
            }
        });

        txtCedulaJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtCedulaJuezMouseClicked(evt);
            }
        });

        txtUsuarioJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtUsuarioJuezMouseClicked(evt);
            }
        });

        txtClaveJuez.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                txtClaveJuezMouseClicked(evt);
            }
        });
        txtClaveJuez.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtClaveJuezActionPerformed(evt);
            }
        });

        jLabel2.setText("primer nombre");

        jLabel3.setText("segundo nombre");

        jLabel4.setText("primer apellido");

        jLabel5.setText("segundo apellido");

        jLabel6.setText("telefono");

        jLabel8.setText("sala");

        jLabel7.setText("cedula");

        jLabel9.setText("usuario");

        jLabel10.setText("clave");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addGap(36, 36, 36)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel7)
                    .addComponent(jLabel2)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                        .addComponent(txtCedulaJuez, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 97, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(txtPrimerApellidoJuez, javax.swing.GroupLayout.PREFERRED_SIZE, 97, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(txtPrimerNombreJuez, javax.swing.GroupLayout.PREFERRED_SIZE, 97, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(txtTelefonoJuez, javax.swing.GroupLayout.PREFERRED_SIZE, 97, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addComponent(jLabel6)
                        .addComponent(jLabel4)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(2, 2, 2)
                        .addComponent(asteriscoCedula))
                    .addComponent(asteriscoTelefono)
                    .addComponent(asteriscoPrimerNombre))
                .addGap(51, 51, 51)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel9)
                    .addComponent(jLabel8)
                    .addComponent(jLabel5)
                    .addComponent(jLabel3)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(txtSegundoApellidoJuez)
                            .addComponent(txtSegundoNombreJuez)
                            .addComponent(txtSalaJuez)
                            .addComponent(txtUsuarioJuez, javax.swing.GroupLayout.DEFAULT_SIZE, 95, Short.MAX_VALUE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(asteriscoUsuario)
                            .addComponent(asteriscoSala)
                            .addComponent(asteriscoPrimerApellido))))
                .addGap(15, 15, 15))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabel10)
                .addGap(218, 218, 218))
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(lblRegistro, javax.swing.GroupLayout.PREFERRED_SIZE, 267, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(asteriscoClave))
                    .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                        .addGap(174, 174, 174)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                .addComponent(txtClaveJuez, javax.swing.GroupLayout.PREFERRED_SIZE, 114, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 119, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(layout.createSequentialGroup()
                                .addGap(5, 5, 5)
                                .addComponent(btnRegistrarJuez)))
                        .addGap(0, 80, Short.MAX_VALUE)))
                .addContainerGap(91, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(10, 10, 10)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(jLabel2))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtPrimerNombreJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtSegundoNombreJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(asteriscoPrimerApellido)
                    .addComponent(asteriscoPrimerNombre))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(jLabel5))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtPrimerApellidoJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtSegundoApellidoJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel6)
                    .addComponent(jLabel8))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtTelefonoJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtSalaJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(asteriscoSala)
                    .addComponent(asteriscoTelefono))
                .addGap(16, 16, 16)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel7)
                    .addComponent(jLabel9))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtCedulaJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtUsuarioJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(asteriscoCedula)
                    .addComponent(asteriscoUsuario))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jLabel10)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(txtClaveJuez, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 27, Short.MAX_VALUE)
                .addComponent(asteriscoClave)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(btnRegistrarJuez)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(lblRegistro, javax.swing.GroupLayout.PREFERRED_SIZE, 18, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(23, 23, 23))
        );

        txtCedulaJuez.getAccessibleContext().setAccessibleName("");

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void txtPrimerApellidoJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtPrimerApellidoJuezMouseClicked
        txtPrimerApellidoJuez.setText(null);
    }//GEN-LAST:event_txtPrimerApellidoJuezMouseClicked

    private void txtSegundoApellidoJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtSegundoApellidoJuezMouseClicked
        txtSegundoApellidoJuez.setText(null);
    }//GEN-LAST:event_txtSegundoApellidoJuezMouseClicked

    private void txtTelefonoJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtTelefonoJuezMouseClicked
        txtTelefonoJuez.setText(null);
    }//GEN-LAST:event_txtTelefonoJuezMouseClicked

    private void txtSalaJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtSalaJuezMouseClicked
        txtSalaJuez.setText(null);
    }//GEN-LAST:event_txtSalaJuezMouseClicked

    private void txtUsuarioJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtUsuarioJuezMouseClicked
        txtUsuarioJuez.setText(null);
    }//GEN-LAST:event_txtUsuarioJuezMouseClicked

    private void txtCedulaJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtCedulaJuezMouseClicked
        txtCedulaJuez.setText(null);
    }//GEN-LAST:event_txtCedulaJuezMouseClicked

    private void btnRegistrarJuezActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnRegistrarJuezActionPerformed
        boolean nombre = Validacion.textFieldNotEmpty(txtPrimerNombreJuez, asteriscoPrimerNombre, "*");
        boolean apellido = Validacion.textFieldNotEmpty(txtPrimerApellidoJuez, asteriscoPrimerApellido, "*");
        boolean telefono = Validacion.textFieldNotEmpty(txtTelefonoJuez, asteriscoTelefono, "*");
        boolean cedula = Validacion.textFieldNotEmpty(txtCedulaJuez, asteriscoCedula, "*");
        boolean sala = Validacion.textFieldNotEmpty(txtPrimerApellidoJuez, asteriscoSala, "*");
        boolean usuario = Validacion.textFieldNotEmpty(txtUsuarioJuez, asteriscoUsuario, "*");
        boolean clave = Validacion.textFieldNotEmpty(txtClaveJuez, asteriscoClave, "*");

        if (nombre && apellido && telefono && cedula && sala && usuario && clave) {
            GestorJuez gestor = new GestorJuez();
            gestor.registrarJuez(txtSalaJuez.getText(), txtClaveJuez.getText(), txtUsuarioJuez.getText(),
                    txtCedulaJuez.getText(), txtPrimerNombreJuez.getText(), txtSegundoNombreJuez.getText(),
                    txtPrimerApellidoJuez.getText(), txtSegundoApellidoJuez.getText(), txtTelefonoJuez.getText());
            Validacion.labelExitoso(lblRegistro, "JUEZ REGISTRADO");
            this.setVisible(false);
            PaginaPrincipal pp = new PaginaPrincipal();
            pp.setVisible(true);
            pp.setLocationRelativeTo(null);

        } else {
            Validacion.labelExitoso(lblRegistro, "LLENAR ESPACIOS CON ASTERISCO");
        }


    }//GEN-LAST:event_btnRegistrarJuezActionPerformed

    private void txtPrimerNombreJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtPrimerNombreJuezMouseClicked
        txtPrimerNombreJuez.setText(null);
    }//GEN-LAST:event_txtPrimerNombreJuezMouseClicked

    private void txtSegundoNombreJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtSegundoNombreJuezMouseClicked
        txtSegundoNombreJuez.setText(null);
    }//GEN-LAST:event_txtSegundoNombreJuezMouseClicked

    private void txtClaveJuezMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_txtClaveJuezMouseClicked
        txtClaveJuez.setText(null);
    }//GEN-LAST:event_txtClaveJuezMouseClicked

    private void txtSalaJuezActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtSalaJuezActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtSalaJuezActionPerformed

    private void txtClaveJuezActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtClaveJuezActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtClaveJuezActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(registrarJuez.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(registrarJuez.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(registrarJuez.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(registrarJuez.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
               registrarJuez rj =  new registrarJuez();
               rj.setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel asteriscoCedula;
    private javax.swing.JLabel asteriscoClave;
    private javax.swing.JLabel asteriscoPrimerApellido;
    private javax.swing.JLabel asteriscoPrimerNombre;
    private javax.swing.JLabel asteriscoSala;
    private javax.swing.JLabel asteriscoTelefono;
    private javax.swing.JLabel asteriscoUsuario;
    private javax.swing.JButton btnRegistrarJuez;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JLabel lblRegistro;
    private java.awt.ScrollPane scrollPane1;
    private javax.swing.JTextField txtCedulaJuez;
    private javax.swing.JTextField txtClaveJuez;
    private javax.swing.JTextField txtPrimerApellidoJuez;
    private javax.swing.JTextField txtPrimerNombreJuez;
    private javax.swing.JTextField txtSalaJuez;
    private javax.swing.JTextField txtSegundoApellidoJuez;
    private javax.swing.JTextField txtSegundoNombreJuez;
    private javax.swing.JTextField txtTelefonoJuez;
    private javax.swing.JTextField txtUsuarioJuez;
    // End of variables declaration//GEN-END:variables
}
