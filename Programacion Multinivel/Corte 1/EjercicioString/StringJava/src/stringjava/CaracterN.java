package stringjava;

import java.util.Scanner;

public class CaracterN {
    Scanner sr = new Scanner(System.in);
    public char caracter(String text){
        System.out.println("Ingrese el numero de la pos que desea extrar su caracter");
        int x = sr.nextInt();
        
        if(x > text.length()){
            return 0;
        }
        
        return text.charAt(x);
    }
}
