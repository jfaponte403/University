package numerosqueserepiten;

import java.util.Scanner;

/**
 *
 * @author Jhonattan
 */
public class GetTamOfVec {
    Scanner sr = new Scanner(System.in);
    private int tamOfVec;
    
    public void setTamOfVec(){
        System.out.println("Ingrese el tamanio del vector");
        this.tamOfVec = sr.nextInt();
    }

    public int getTamOfVec() {
        return tamOfVec;
    } 
}
