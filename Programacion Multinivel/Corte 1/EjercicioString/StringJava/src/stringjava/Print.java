/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package stringjava;

/**
 *
 * @author administradorPC
 */
public class Print {
    public void mostrar(String text, int x){
        System.out.println("Su cadena de texto es: [" + text + "]" + ", Tiene: " + x + " caracteres");     
    }
    public void mostrar(String text, String textLenght){
        System.out.print("Su cadena de texto es: [" + text + "]");
        System.out.println(", su sub cadena es: [" + textLenght + "]");    
    }
    public void mostrar(String text, char x){
        System.out.print("Su cadena de texto es: [" + text + "]");
        System.out.println(", su caracter es: [" + x + "]"); 
    }
    public void mostrar(String x, String y, String z){
        System.out.println(x + " " + y + " " + z);
    }
    public void mostrar(String text1, String text2, int pos){
        System.out.println("Su cadena de texto es: [" + text1 + "]");
        System.out.println("Su cadena de texto es: [" + text2 + "]");
        System.out.println("Coindicen en la pos: " + pos);
    }
}
