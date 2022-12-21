package stringjava;

import java.util.Scanner;

public class SubStringNToM {
    Scanner sr = new Scanner(System.in);
    
    public String stringNtoM(String text){
        System.out.println("Ingrese un numero de inicio");
        int x = sr.nextInt();
        
        System.out.println("Ingrese un numero de cierre");
        int y = sr.nextInt();
        
        int aux = 0;
        if(x < y){
            aux = y;
            y = x;
            x = aux;
        }
        
        if(text.length() > x || text.length() > y){
            return null;
        }
        
        return text.substring(y, x);
    }
}
