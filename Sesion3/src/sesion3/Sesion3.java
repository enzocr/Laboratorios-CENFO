/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sesion3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;

/**
 *
 * @author enzoq
 */
public class Sesion3 {

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintStream out = System.out;

    /**
     * @param args the command line arguments
     * @throws java.io.IOException
     */
    public static void main(String[] args) throws IOException {
        out.println("Digite cantidad de estudiantes");
        int cantEstudiantes = Integer.parseInt(in.readLine());
        int[] arregloEstudiantes = new int[cantEstudiantes];

        double[] notas = new double[arregloEstudiantes.length];

        double examen;

        for (int i = 0; i < arregloEstudiantes.length; i++) {
            double sumaTotalNota = 0;
            for (int j = 0; j < 3; j++) {
                out.println("Digite nota examen # " + (j + 1) + ": ");
                examen = Integer.parseInt(in.readLine());

                switch (j) {
                    case 0:
                        examen = examen * 0.4;
                        break;
                    case 1:
                        examen = examen * 0.35;
                        break;
                    case 2:
                        examen = examen * 0.25;
                        break;
                    default:
                        break;
                }

                sumaTotalNota = sumaTotalNota + examen;
            }
            notas[i] = sumaTotalNota / 3;
        }

        for (int i = 0; i < notas.length; i++) {
            out.print("Promedio ponderado del estudiante # " + (i + 1) + " " + notas[i]);
        }

    }

}
