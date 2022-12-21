/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package parcial;

import java.util.Scanner;

/**
 *
 * @author Jhonattan
 */
public class GetTam {
    Scanner sr = new Scanner(System.in);
    public int getTam(){
        System.out.println("Ingrese el tamaño del vector");
        int x = sr.nextInt();
        return x;
    }
}
