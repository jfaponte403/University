/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package numeros.amigos;

/**
 *
 * @author Jhonattan
 */
public class Mostrar {
    public void mostrar(boolean statue, int x, int y){
        if(statue){
            System.out.println("Son amigos " + x + " y " + y);
        } else{
            System.out.println("No son amigos " + x + " y " + y);
        }
    }
}
