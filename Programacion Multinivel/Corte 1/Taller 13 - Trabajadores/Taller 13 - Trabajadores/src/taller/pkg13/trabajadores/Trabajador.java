/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package taller.pkg13.trabajadores;

import java.time.LocalDate;

/**
 *
 * @author Jhonattan
 */
public class Trabajador {
   private String name;
   private int id;
   private LocalDate dataStart;
   private int age;
   private long salario;

    public long getSalario() {
        return salario;
    }

    public void setSalario(int salario) {
        this.salario = salario;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public LocalDate getDataStart() {
        return dataStart;
    }

    public void setDataStart(String text) {
        this.dataStart = LocalDate.parse(text);
    }
    
}
