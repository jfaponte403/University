/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ejercicioprofesorv2;

/**
 *
 * @author Jhonattan
 */
public class CalcularSalario {
    public long salud(Profesor vec){
        return (long) (vec.getSalary() * 0.125);
    }
    public long pension(Profesor vec){
        return (long) (vec.getSalary() * 0.16);
    }
}
