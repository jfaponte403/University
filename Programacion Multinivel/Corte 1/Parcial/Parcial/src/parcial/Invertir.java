/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package parcial;

/**
 *
 * @author Jhonattan
 */
public class Invertir {
    public Numero[] invert(Numero[] arr){
        Numero[] aux = new Numero[arr.length];
        int count = arr.length - 1;
        for (int i = 0; i < arr.length; i++) {
            aux[i] = new Numero();
            aux[i].setNum(arr[count].getNum());
            count--;
        }
        return aux;
    }
}
