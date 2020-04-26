/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sesion2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;

/**
 *
 * @author enzoq
 */
public class Sesion2 {

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintStream out = System.out;

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        int decision;

    }

    public void burbuja() {
        int temporal;
        int[] arreglo = new int[]{23, 19, 45, 31, 15};
        out.println("=== ARREGLO SIN ORADENAR ===");
        for (int i = 0; i < arreglo.length; i++) {
            out.println(arreglo[i]);
        }
        for (int i = arreglo.length - 1; i > 0; i--) {
            for (int k = 0; k < i; k++) {
                if (arreglo[k] > arreglo[k + 1]) {
                    temporal = arreglo[k];
                    arreglo[k] = arreglo[k + 1];
                    arreglo[k + 1] = temporal;
                }
            }
        }
        out.println("=== ARREGLO ORDENADO ===");
        for (int i = 0; i < arreglo.length; i++) {
            out.println(arreglo[i]);
        }
    }

    public void seleccion() {

        int i, k, pos, max, aux;
        int[] arreglo = new int[]{23, 19, 45, 31, 15};
        out.println("=== ARREGLO SIN ORDENAR ===");
        for (i = 0; i < arreglo.length; i++) {
            out.println(arreglo[i]);
        }
        for (i = arreglo.length - 1; i > 0; i--) { //controla los recorridos
            for (k = 0, max = arreglo[0], pos = 0; k <= i; k++) { //encuentra el mayor
                if (arreglo[k] > max) {
                    max = arreglo[k]; //max tiene el valor mayor
                    pos = k; //pos tiene la posición del mayor
                }
            }
            aux = arreglo[pos]; //intercambia el mayor con el elemento en i
            arreglo[pos] = arreglo[i];
            arreglo[i] = aux;
        }
        out.println("=== ARREGLO ORDENADO ===");
        for (i = 0; i < arreglo.length; i++) {
            out.println(arreglo[i]);
        }
    }

    public void lineal() throws IOException {

        int[] arreglo = new int[]{23, 19, 45, 31, 15};
        int i;
        int numeroABuscar;
        boolean encontrado = false; //determina si el elemento fue encontrado
        out.println("=== DATOS DEL ARREGLO ===");
        for (i = 0; i < arreglo.length; i++) {
            out.println(arreglo[i]);
        }
        out.println("Digite el número que desea buscar");
        numeroABuscar = Integer.parseInt(in.readLine());
        for (i = 0; i < arreglo.length && !encontrado; i++) {
            if (arreglo[i] == numeroABuscar) {
                encontrado = true;
            }
        }
        if (encontrado) {
            out.println(numeroABuscar + " fue encontrado en la posición " + (i - 1));
        } else {
            out.println(numeroABuscar + " no fue encontrado");
        }

    }
}
