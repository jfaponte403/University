/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package taller.pkg13.trabajadores;

/**
 *
 * @author Jhonattan
 */
public class Mostrar {
    public void getPrint(Trabajador[] vec){
        Calcular setData = new Calcular();
        
        for (int i = 0; i < vec.length; i++) {
            System.out.println("Nombre: " + vec[i].getName());
            System.out.println("id: " + vec[i].getId());
            System.out.println("Salario: " + vec[i].getSalario());
            System.out.println("Fecha de ingreso: " + vec[i].getDataStart());
            System.out.println("Valor de la prima es: " + setData.valorPrima(vec[i]));
        }
    }
}
