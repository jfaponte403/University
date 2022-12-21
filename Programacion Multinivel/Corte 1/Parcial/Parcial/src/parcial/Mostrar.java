/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package parcial;

/**
 *
 * @author Jhonattan
 */
public class Mostrar {
    Amstrong isAmstrong = new Amstrong();
    public void getResult(Numero[] arr, Numero[] arrInv){
        System.out.println("Su arreglo es: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print("[" + arr[i].getNum() + "]");
        }
        System.out.println("\n Su arreglo invertido es: ");
        for (int i = 0; i < arrInv.length; i++) {
            System.out.print("[" + arrInv[i].getNum() + "]");
        }
        System.out.println("\n Y estos son Amstrong");
        for (int i = 0; i < arrInv.length; i++) {
            if (isAmstrong.isAmstrong(arrInv[i].getNum())) {
                System.out.println(arrInv[i].getNum() + " Es Amstrong");
            } else {
                System.out.println(arrInv[i].getNum() + " NO es Amstrong");
            }
        }
    }
}
