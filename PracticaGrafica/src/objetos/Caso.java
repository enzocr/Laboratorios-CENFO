package objetos;

import java.time.LocalDate;

/**
 *
 * @author enzoq
 */
public class Caso {
    
    private int idCaso;
    private int numero;
    private String descripcion;
    private String estado;
    private LocalDate fecha;
    private Querellante querellante;
    

    public Caso() {

    }

    public Caso(int numero, String descripcion, String estado, LocalDate fecha, Querellante querellante) {

        this.numero = numero;
        this.descripcion = descripcion;
        this.estado = estado;
        this.fecha = fecha;
        this.querellante = querellante;
        
    }

    public int getIdCaso() {
        return idCaso;
    }

    public void setIdCaso(int idCaso) {
        this.idCaso = idCaso;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getDescripcion() {
        return descripcion;
    }

    public void setDescripcion(String descripcion) {
        this.descripcion = descripcion;
    }

    public String getEstado() {
        return estado;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }

    public LocalDate getFecha() {
        return fecha;
    }

    public void setFecha(LocalDate fecha) {
        this.fecha = fecha;
    }

    public Querellante getQuerellante() {
        return querellante;
    }

    public void setQuerellante(Querellante querellante) {
        this.querellante = querellante;
    }

    @Override
    public String toString() {
        return "Caso{" + ", numero=" + numero + ", descripcion=" + descripcion + ", estado=" + estado + ", fecha=" + fecha + ", querellante=" + querellante+ '}';
    }

}
