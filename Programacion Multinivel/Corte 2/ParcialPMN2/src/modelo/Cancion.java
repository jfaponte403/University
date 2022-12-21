/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author Jhonattan
 */
public class Cancion {
    private String titulo;
    private String genero;
    private int duracion;
    private Cancion me;

    public Cancion getMe() {
        return me;
    }

    public void setMe(Cancion me) {
        this.me = me;
    }

    public Cancion() {
    }

    public Cancion(String titulo, String genero, int duracion) {
        this.titulo = titulo;
        this.genero = genero;
        this.duracion = duracion;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public int getDuracion() {
        return duracion;
    }

    public void setDuracion(int duracion) {
        this.duracion = duracion;
    }
    
    
}


