/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package parcial;

/**
 *
 * @author Jhonattan
 */
public class Parcial {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Mostrar getResult = new Mostrar();
        GetNum getNum = new GetNum();
        GetTam getTam = new GetTam();
        Numero[] arrN = new Numero[getTam.getTam()];
        Invertir invert = new Invertir();
        
        getNum.getNums(arrN);
        getResult.getResult(arrN, invert.invert(arrN));
        
        
        
    }
    
}
