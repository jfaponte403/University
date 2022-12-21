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
public class GetNum {
    Scanner sr = new Scanner(System.in);
    public void getNums(Numero[] arr){
        for (int i = 0; i < arr.length; i++) {
            arr[i] = new Numero();
            System.out.println("Ingrese un numero");
            arr[i].setNum(sr.nextInt());
        }
    }
}
