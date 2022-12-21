/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Modelo;

import java.time.LocalDate;

/**
 *
 * @author administradorPC
 */
public class Conductor {
    private int doi;
    private String nbr;
    private String sex;
    private String linC;
    private String cat;
    private LocalDate fev;

    public int getDoi() {
        return doi;
    }

    public void setDoi(int doi) {
        this.doi = doi;
    }

    public String getNbr() {
        return nbr;
    }

    public void setNbr(String nbr) {
        this.nbr = nbr;
    }

    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public String getLinC() {
        return linC;
    }

    public void setLinC(String linC) {
        this.linC = linC;
    }

    public String getCat() {
        return cat;
    }

    public void setCat(String cat) {
        this.cat = cat;
    }

    public LocalDate getFev() {
        return fev;
    }

    public void setFev(LocalDate fev) {
        this.fev = fev;
    }
    
    
}
