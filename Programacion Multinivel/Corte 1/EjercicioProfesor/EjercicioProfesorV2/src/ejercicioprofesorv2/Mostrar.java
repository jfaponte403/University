/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ejercicioprofesorv2;

/**
 *
 * @author Jhonattan
 */
public class Mostrar {
    CalcularSalario salud = new CalcularSalario();
    
    public void mostrar(Profesor[] vec){
        for (int i = 0; i < vec.length; i++) {
            System.out.println("Nombre: " + vec[i].getName());
            System.out.println("id: " + vec[i].getId());
            System.out.println("Salario: " + vec[i].getSalary());
            System.out.println("Aporte a salud: " + salud.salud(vec[i]));
            System.out.println("Aporte a pension: " + salud.pension(vec[i]));
        }
    }
}
