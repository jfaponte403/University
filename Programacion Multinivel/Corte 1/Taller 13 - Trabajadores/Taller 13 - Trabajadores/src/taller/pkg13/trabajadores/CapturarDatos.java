/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package taller.pkg13.trabajadores;

import java.time.LocalDate;
import java.util.Scanner;

/**
 *
 * @author Jhonattan
 */
public class CapturarDatos {
    Scanner sr = new Scanner(System.in);
    public int getTam(){
        System.out.println("Ingrese la cantidad de empleados");
        int x = sr.nextInt();
        sr.nextLine();
        return x;
    }
    
    public void getDataEmploys(Trabajador[] vec){
        for (int i = 0; i < vec.length; i++) {
            vec[i] = new Trabajador();
        
            System.out.println("Ingrese el nombre");
            vec[i].setName(sr.nextLine());
            
            System.out.println("Ingrese la edad de " + vec[i].getName());
            vec[i].setAge(sr.nextInt());
            
            System.out.println("Ingrese el id de " + vec[i].getName());
            vec[i].setId(sr.nextInt());
            
            System.out.println("Ingrese el Salario de " + vec[i].getName());
            vec[i].setSalario(sr.nextInt());
            
            System.out.println("Ingrese la fecha de ingreso de " + vec[i].getName() + " AAAA-MM-DD");
            vec[i].setDataStart(sr.next());
            
            sr.nextLine();
        }
    }
}
