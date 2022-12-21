package numeros.amigos;

import java.util.Scanner;



public class GetNumero {
    Scanner sr = new Scanner(System.in);
    
    public int getNum(){
        System.out.println("Ingrese un numero");
        int x = sr.nextInt();
        return x;
    }
}
