/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tareaunoicai;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import javax.swing.JOptionPane;

/**
 *
 * @author enzoq
 */
public class TareaUnoICAI {

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintStream out = System.out;

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        int opt;

        do {
            showMenu();
            opt = readOption();
            executeAction(opt);
        } while (opt != 11);
    }

    private static void showMenu() throws IOException {

        out.println();
        out.println("-----BIENVENIDO-----");
        out.println("1.  ITERACIONES");
        out.println("2.  NUMERO PAR O NO");
        out.println("3.  TIPO DE OPERACION ARITMETICA");
        out.println("4.  ES PRIMO O NO DE 0-100");
        out.println("5.  PROMEDIO DE N NUMEROS");
        out.println("6.  CADENA DE TEXTO AL REVES");
        out.println("7.  SUSTITUIR ESPACIOS EN BLANCO POR *");
        out.println("8.  PALABRA AL REVES");
        out.println("9.  FORMULARIO");
        out.println("10. TRES NUMEROS JUNTOS");
        out.println("11. SALIR");
        out.println();
    }

    /**
     * La opcion escogida por el cliente es parseada y se retorna
     *
     * @return la opcion escogida por el cliente o administrador
     * @throws IOException
     */
    private static int readOption() throws IOException {

        int opcion;

        opcion = Integer.parseInt(JOptionPane.showInputDialog("Seleccione accion a realizar"));

        return opcion;
    }

    /**
     *
     * @param pOpcion recibe opcion digitada por el usuario y la usa en el
     * switch
     * @throws IOException
     */
    private static void executeAction(int pOpcion) throws IOException {

        switch (pOpcion) {

            case 1:
                iterations();
                break;

            case 2:
                isPairOrNot();
                break;

            case 3:
                whichArithmeticTypeIs();
                break;

            case 4:
                isPrimeOrNot();
                break;

            case 5:
                average();
                break;

            case 6:
                twoBackwardString();
                break;

            case 7:
                charString();
                break;

            case 8:
                reverseWord();
                break;

            case 9:
                form();
                break;

            case 10:
                threeDiffNums();
                break;

            case 11:
                out.println("Cerrando aplicacion...");
                break;

            default:
                out.println("Opcion invalida");

        }

    }

    private static void iterations() {
        int i;
        out.println("FOR:  ");
        for (i = 5; i <= 50; i += 5) {
            out.print(i + " - ");
        }
        out.println();
        out.println("------------------------------");
        out.println();
        i = 5;
        out.println("WHILE: ");
        while (i <= 50) {
            out.print(i + " - ");
            i += 5;
        }
        out.println();
        out.println("------------------------------");
        out.println();
        i = 5;
        out.println("DO WHILE: ");
        do {
            out.print(i + " - ");
            i += 5;
        } while (i <= 50);
    }

    private static void isPairOrNot() throws IOException {
        out.println("Ingrese numero a evaluar: ");
        int num = Integer.parseInt(in.readLine());
        if (num % 2 == 0) {
            out.println("El # " + num + " es PAR");
        } else {
            out.println("El # " + num + "  es IMPAR");
        }
    }

    private static void whichArithmeticTypeIs() throws IOException {
        out.println("Ingrese operador a evaluar: ");
        char op = in.readLine().charAt(0);
        switch (op) {
            case '*':
                out.println("Caracter de MULTIPLICACION");
                break;
            case '+':
                out.println("Caracter de SUMA");
                break;
            case '-':
                out.println("Caracter de RESTA");
                break;
            case '/':
                out.println("Caracter de DIVISION");
                break;
            default:
                out.println("Caracter desconocido");
                break;
        }
    }

    private static void isPrimeOrNot() throws IOException {

        for (int i = 0; i <= 100; i++) {
            if ((i == 2 || i == 3) || ((i * i - 1) % 24 == 0)) {
                out.print(i + " - ");
            }
        }
    }

    private static void average() throws IOException {
        int acumulator = 0;
        out.println("Ingrese la cantidad de numeros a evaluar: ");
        int n = Integer.parseInt(in.readLine());
        for (int i = 0; i < n; i++) {
            out.println("Ingrese numero #: " + (i + 1));
            int num = Integer.parseInt(in.readLine());
            acumulator += num;
        }
        out.println("Promedio: " + acumulator / n);
    }

    private static void twoBackwardString() throws IOException {

        out.println("Ingrese cadena de texto: ");
        String s = in.readLine();

        String[] string = s.split(" ");
        out.println(string[1] + " " + string[0]);

    }

    private static void charString() throws IOException {
        out.println("Ingrese cadena de texto: ");
        String string = in.readLine();

        String replaceString = string.replaceAll(" ", "*Hola");//replaces all occurrences of "a" to "e"  
        System.out.println(replaceString);
    }

    private static void reverseWord() throws IOException {
        out.println("Ingrese texto: ");
        String string = in.readLine();
        out.println(recursiveWord(string));
    }

    private static String recursiveWord(String str) {
        if ((null == str) || (str.length() <= 1)) {
            return str;
        }
        return recursiveWord(str.substring(1)) + str.charAt(0);
    }

    private static void threeDiffNums() throws IOException {
        boolean flag = true;
        int array[] = new int[3];
        for (int i = 0; i < array.length; i++) {
            out.println("Ingrese #: " + (i + 1));
            int num = Integer.parseInt(in.readLine());
            array[i] = num;
        }

        if ((array[0] == array[1]) || (array[0] == array[2]) || (array[1] == array[2])) {
            flag = false;
        }

        if (flag) {
            out.println(array[0] + "" + array[1] + "" + array[2]);
        } else {
            out.println("NUMEROS REPETIDOS");
        }

    }

    private static void form() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

}
