package AccesoDatos;

import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

/**
 * Esta clase inicializa el driver y la conexión a la base de datos actualmente
 * por un archivo en formato .txt el cual contiene dicha información.
 *
 * @author Ángel Marín Trejos
 */
public class Conector {

    private static AccesoBD conectorBD = null;

    /**
     * Método que recibe un string con la información del driver y otro con la
     * información de la conexión a la base de datos para efectuar dicha
     * conexión.
     *
     * @param driver Especificación del tipo de driver que se utiliza, el cual
     * responde al repositorio utilizado
     * @param conexion Cadena de conexión con la base de datos
     * @return El conectorBD que es una variable de tipo AccesoBD.
     */
    public static AccesoBD getConector(String driver, String conexion) {
        if (conectorBD == null) {
            try {
                conectorBD = new AccesoBD(driver, conexion);
            } catch (Exception ex) {
                ex.getMessage();
            }
        }
        return conectorBD;
    }

    /**
     * Método que se conecta con la base de datos sin necesidad de recibir
     * ningún parámetro, sino que se conecta por medio de un archivo .txt, de
     * manera que el driver y la conexión se puedan editar dentro de este
     * archivo para lograr así un ambiente de portabilidad.
     *
     * @return El conectorBD que es una variable de tipo AccesoBD.
     * @throws java.io.IOException
     * 
     */
    public static AccesoBD getConector() throws IOException {

        String driver = "", conexion = "";

        String filePath = new File("").getAbsolutePath();

        Scanner x;
        try {
            x = new Scanner(new FileReader(filePath + "base_de_datos.txt"));
            while (x.hasNext()) {
                driver = x.next();
                conexion = x.next();
            }

            x.close();
            if (conectorBD == null) {

                conectorBD = new AccesoBD(driver, conexion);
            }

        } catch (Exception ex) {
            ex.getMessage();
        }
        return conectorBD;

    }

}//Fin del programa
