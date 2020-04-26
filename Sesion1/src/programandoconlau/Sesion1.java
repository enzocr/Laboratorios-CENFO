/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package programandoconlau;

import java.io.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;

/**
 *
 * @author enzoq
 */
public class Sesion1 {

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintStream out = System.out;

    /**
     * @param args the command line arguments
     * @throws java.io.IOException
     */
    public static void main(String[] args) throws IOException {

//        int matematicas, fisica, sociales, ciencias, espanol;
//        int promedio = 0;
//
//        out.println("Digite nota de mate: ");
//        matematicas = Integer.parseInt(in.readLine());
//        out.println("Digite nota de fisica: ");
//        fisica = Integer.parseInt(in.readLine());
//        out.println("Digite nota de sociales: ");
//        sociales = Integer.parseInt(in.readLine());
//        out.println("Digite nota de ciencias: ");
//        ciencias = Integer.parseInt(in.readLine());
//        out.println("Digite nota de espanol: ");
//        espanol = Integer.parseInt(in.readLine());
//
//        promedio = (matematicas + fisica + sociales + ciencias + espanol) / 5;
//
//        if (promedio > 90) {
//            promedio = promedio + 10;
//            out.println("Clasificacion A. La nota es: " + promedio);
//        } else if (promedio >= 88 && promedio <= 90) {
//            promedio = promedio + 7;
//            out.println("Clasificacion B. La nota es: " + promedio);
//
//        } else if (promedio >= 85 && promedio <= 87) {
//            promedio = promedio + 4;
//            out.println("Clasificacion C. La nota es: " + promedio);
//
//        } else {
//            out.println("Clasificacion D");
//        }
//   
//        boolean var = true;
//        int arreglo[] = new int[5];
////
//        for (int i = 0; i < arreglo.length; i++) {
//            if (var == true) {
//                out.println("hola mundo");
//            } else {
//                out.println(i);
//            }
//        }
//        int contador = 0;
//        int sumaTotal = 0;
//
//        while (var == true) {
//
//            System.out.println(contador);
//            if (contador == 8) {
//                var = false;
//            }
//            contador = contador + 1; //contador++
//        }
//
//        int decision;
//
//        do {
//
//            out.println("Digite decision: ");
//            decision = Integer.parseInt(in.readLine());
//            out.println("1. Imprimir 1");
//            out.println("2. Imprimir 2");
//            out.println("3. Salir");
//            switch (decision) {
//                case 1:
//                    out.println("Formula #1");
//                    break;
//                case 2:
//                    break;
//                default:
//                    break;
//            }
//
//        } while (decision != 3);

//        if (promedio >= 88 && promedio <= 90) {
//            promedio = promedio + 7;
//            out.println("Clasificacion B. La nota es: " + promedio);
//        }
//            int dia, mes, anio;
//            out.println("Digite dia: ");
//            dia = Integer.parseInt(in.readLine());
//            out.println("Digite mes: ");
//            mes = Integer.parseInt(in.readLine());
//            out.println("Digite anio: ");
//            anio = Integer.parseInt(in.readLine());
//
//            if (dia == 30 && mes == 12) {
//                dia = 1;
//                mes = 1;
//                anio = anio + 1;
//            } else if (dia == 30) {
//                dia = 1;
//                mes = mes + 1;
//            } else {
//                dia = dia + 1;
//            }
//
//            out.println("Dia: " + dia + ". Mes: " + mes + ". Anio: " + anio);
//        int aniosLaborales = 2, capacitacionesInternas = 0, salario = 0;
//        String categoria = "";
//
//        if (aniosLaborales < 3 && capacitacionesInternas == 0 && (categoria.equals("A") || categoria.equals("B"))) {
//            salario = 850;
//        } else if (aniosLaborales < 3 && capacitacionesInternas > 0 && (categoria.equals("A") || categoria.equals("B"))) {
//            salario = 1250;
//        } else if (aniosLaborales >= 3 && capacitacionesInternas > 0 && categoria.equals("A")) {
//            salario = 1550;
//        } else if (aniosLaborales >= 3 && capacitacionesInternas > 0 && categoria.equals("B")) {
//            salario = 1750;
//        } else {
//            salario = 1300;
//        }
//        int arreglo[] = new int[5];
//        int num1, num2, num3, num4, num5;
//        out.println("Nota 1: ");
//        num1 = Integer.parseInt(in.readLine());
//        arreglo[0] = num1;
//        out.println("Nota 2: ");
//        num2 = Integer.parseInt(in.readLine());
//        arreglo[1] = num2;
//        out.println("Nota 3: ");
//        num3 = Integer.parseInt(in.readLine());
//        arreglo[2] = num3;
//        out.println("Nota 4: ");
//        num4 = Integer.parseInt(in.readLine());
//        arreglo[3] = num4;
//        out.println("Nota 5: ");
//        num5 = Integer.parseInt(in.readLine());
//        arreglo[4] = num5;
//        
//        int acumulador = 0;
//        for (int i = 0; i < arreglo.length; i++) {
//            acumulador = acumulador + arreglo[i];
//        }
//        out.println(acumulador / 5);

    }

}
