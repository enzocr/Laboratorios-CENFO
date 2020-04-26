/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ui;

import manager.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import javax.swing.JOptionPane;

/**
 *
 * @author enzoq
 */
public class main {

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintStream out = System.out;

    private static final EncryptManagerAsymetric asymetric = new EncryptManagerAsymetric();
    private static final EncryptManagerSymetric symetric = new EncryptManagerSymetric();

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try {
            int opc;

            do {

                mostrarMenu();
                opc = leerOpcion();
                ejecutarAccion(opc);

            } while (opc != 3);
        } catch (Exception e) {
            out.println(e.getMessage());

        }
    }

    public static void mostrarMenu() throws IOException {

        out.println();

        out.println("   ---| ALGORITMOS CRIPTOGRÁFICOS |---");
        out.println("1. ---|         ASIMÉTRICOS       |--- ");
        out.println("2. ---|         SIMÉTRICOS        |--- ");
        out.println("3. ---|           SALIR           |--- ");

        out.println();
    }

    public static int leerOpcion() throws Exception {

        int opcion;

        opcion = Integer.parseInt(JOptionPane.showInputDialog("Seleccione acciÓn a realizar"));

        if (opcion < 0 || opcion > 4) {

            throw new Exception("OPCIÓN INVÁLIDA");

        }

        return opcion;
    }

    public static void ejecutarAccion(int pOpcion) throws Exception {
        int opc;
        switch (pOpcion) {
            case 1:

                do {
                    menuAsimetrico();
                    opc = leerOpcion();
                    ejecutarAccionAsimetrica(opc);
                } while (opc != 4);

                break;
            case 2:

                do {
                    menuSimetrico();
                    opc = leerOpcion();
                    ejecutarAccionSimetrica(opc);
                } while (opc != 4);

                break;

            case 3:
                out.println("Cerrando aplicación");
                break;

            default:
                out.println("Opcion invalida");
                throw new Exception("OPCION INVALIDA");
        }
    }

    public static void menuAsimetrico() throws IOException {

        out.println();

        out.println("   ---| MENU ALGORITMO CRIPTOGRÁFICO ASIMÉTRICO |---");
        out.println("1. ---|             CREAR LLAVE                 |--- ");
        out.println("2. ---|          ENCRIPTAR MENSAJE              |--- ");
        out.println("3. ---|         DESENCRIPTAR MENSAJE            |--- ");
        out.println("4. ---|                SALIR                    |--- ");

        out.println();
    }

    public static void menuSimetrico() throws IOException {

        out.println();
        out.println("   ---| MENU ALGORITMO CRIPTOGRÁFICO SIMÉTRICO  |---");
        out.println("1. ---|             CREAR LLAVE                 |--- ");
        out.println("2. ---|          ENCRIPTAR MENSAJE              |--- ");
        out.println("3. ---|         DESENCRIPTAR MENSAJE            |--- ");
        out.println("4. ---|                SALIR                    |--- ");

        out.println();
    }

    public static void ejecutarAccionAsimetrica(int pOpcion) throws Exception {
        String name, messageName;
        switch (pOpcion) {

            case 1:
                out.println("Key name: ");
                name = in.readLine();
                asymetric.createKey(name);
                break;

            case 2:
                out.println("Key name: ");
                name = in.readLine();
                System.out.println("Message name: ");
                messageName = in.readLine();
                System.out.println("Message: ");
                String message = in.readLine();
                asymetric.encryptMessage(messageName, message, name);
                break;

            case 3:
                out.println("Key name: ");
                String keyName = in.readLine();
                System.out.println("Message name: ");
                messageName = in.readLine();
                out.println("El mensaje era: " + asymetric.decryptMessage(messageName, keyName));
                break;

            case 4:
                out.println("Volviendo al menú...");
                break;

            default:
                out.println("Opcion invalida");
                throw new Exception("OPCION INVALIDA");
        }
    }

    public static void ejecutarAccionSimetrica(int pOpcion) throws Exception {
        String name, messageName;

        switch (pOpcion) {

            case 1:
                out.println("Key name: ");
                name = in.readLine();
                symetric.createKey(name);
                break;

            case 2:

                out.println("Key name: ");
                name = in.readLine();
                System.out.println("Message name: ");
                messageName = in.readLine();
                System.out.println("Message: ");
                String message = in.readLine();
                symetric.encryptMessage(messageName, message, name);
                break;

            case 3:
                System.out.println("Key name: ");
                String keyName = in.readLine();
                System.out.println("Message name: ");
                messageName = in.readLine();
                out.println("El mensaje es: " + symetric.decryptMessage(messageName, keyName));

                break;

            case 4:

                out.println("Volviendo al menú...");
                break;

            default:
                out.println("Opcion invalida");
                throw new Exception("OPCION INVALIDA");
        }
    }

}
