package accesoDatos;

import java.sql.*;

/**
 * Esta clase permite la recepción del driver y de la conexión a la base de
 * datos, además de que se encarga de ejecutar las sentencias de la base de
 * datos.
 *
 * @author Ángel Marín Trejos
 */
public class AccesoBD {

    //atributos del objeto
    private Connection conn = null;
    private Statement st;

    /**
     * Constructor que recibe todos los parámetros necesarios para abrir una
     * conexión válida.
     *
     * @param driver Especificación del tipo de driver que se utiliza, el cual
     * responde al repositorio utilizado
     * @param conexion Cadena de conexión con la base de datos
     * @param usuario Nombre del usuario de la base de datos, si no se utiliza,
     * se debe enviar un string vacío
     * @param clave Palabra clave del usuario para realizar su autenticaci�n en
     * la base de datos
     * @throws java.sql.SQLException Lanza la excepción de SQL.
     * @throws java.lang.Exception Lanza cualquier otro tipo de excepción.
     */
    public AccesoBD(String driver, String conexion, String usuario, String clave) throws SQLException, Exception {
        Class.forName(driver);
        conn = DriverManager.getConnection(conexion);
        st = conn.createStatement();
    }

    /**
     * Constructor que recibe todos los parámetros necesarios para abrir una
     * conexión válida.
     *
     * @param driver Especificación del tipo de driver que se utiliza, el cual
     * responde al repositorio utilizado
     * @param conexion Cadena de conexión con la base de datos
     * @throws SQLException Lanza la excepción de SQL.
     * @throws Exception Lanza cualquier otro tipo de excepción.
     */
    public AccesoBD(String driver, String conexion) throws SQLException, Exception {
        Class.forName(driver);
        conn = DriverManager.getConnection(conexion);
        st = conn.createStatement();
    }

    /**
     * Método que ejecuta un query en la base de datos, la cual no tiene
     * retorno, es decir un insert, delete o update.
     *
     * @param sentencia Cadena sql que será ejecutada en la base de datos
     * @throws java.sql.SQLException Lanza la excepción de SQL.
     * @throws java.lang.Exception Lanza cualquier otro tipo de excepción.
     *
     */
    public void ejecutarSQL(String sentencia)
            throws SQLException, Exception {
        st.execute(sentencia);
    }

    /**
     * Método que ejecuta una sentencia en la base de datos y devuelve un
     * ResultSet con los resultados.
     *
     * @param sentencia Cadena sql que será ejecutada en la base de datos
     * @param retorno booleana que indica que se desea un resultado de la
     * consulta
     * @return
     * @throws java.sql.SQLException Lanza la excepción de SQL.
     * @throws java.lang.Exception Lanza cualquier otro tipo de excepción.
     */
    public ResultSet ejecutarSQL(String sentencia,
            boolean retorno)
            throws SQLException, Exception {
        ResultSet rs;
        rs = st.executeQuery(sentencia);
        return rs;
    }

    /**
     * Método que permite controlar el inicio de una transacción desde afuera. A
     * partir de este momento todas las sentencias esperarán la orden para ser
     * aceptadas en la base de datos.
     *
     * @throws java.sql.SQLException Lanza la excepción de SQL.
     */
    public void iniciarTransaccion()
            throws java.sql.SQLException {
        conn.setAutoCommit(false);
    }

    /**
     * Método que permite controlar el término de una transacción desde afuera.
     * A partir de este momento todas las sentencias se ejecturán de forma
     * individual en la base de datos.
     *
     * @throws java.sql.SQLException Lanza la excepción de SQL.
     */
    public void terminarTransaccion()
            throws java.sql.SQLException {
        conn.setAutoCommit(true);
    }

    /**
     * Método que indica que la transacción ha sido aceptada
     *
     * @throws java.sql.SQLException Lanza la excepción de SQL.
     */
    public void aceptarTransaccion()
            throws java.sql.SQLException {
        conn.commit();
    }

    /**
     * Método que indica que la transacción debe ser deshecha porque no se
     * realizó de forma exitosa
     *
     * @throws java.sql.SQLException Lanza la excepción de SQL.
     */
    public void deshacerTransaccion()
            throws java.sql.SQLException {
        conn.rollback();

    }

    /**
     * Método sobreescrito de la clase Object que es invocado por el Garbage
     * Collector, cuando es invocado libera la conexión abierta durante la
     * creación del objeto.
     *
     */
    protected void finalize() {
        try {
            conn.close();
        } catch (Exception e) {
            /*este m�todo es llamado por el
			 *garbage collector, por lo tanto
			 *se atrapa la excepci�n pero no se
			 *reporta*/
        }
    }
} //Fin del programa
