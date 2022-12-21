package modelo;

import java.time.LocalDate;

public class Conductor {
    
    private int doi;
    private String nbr;
    private String sex;
    private String licc;
    private String cat;
    private LocalDate fev;

    public Conductor(int doi, String nbr, String sex, String licc, String cat, LocalDate fev) {
        this.doi = doi;
        this.nbr = nbr;
        this.sex = sex;
        this.licc = licc;
        this.cat = cat;
        this.fev = fev;
    }

    public Conductor() {
        
    }
    
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

    public String getLicc() {
        return licc;
    }

    public void setLicc(String licc) {
        this.licc = licc;
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
