package numeroperfecto;

import java.util.Scanner;

public class NumeroPerfecto {

    public static void main(String[] args) {
        Scanner sr = new Scanner(System.in);
        DivisoresDeX div = new DivisoresDeX();
        isPerfectNum perfectNum = new isPerfectNum();
        
        System.out.println("Ingrese el numero para saber si es perfecto");
        int numUser = sr.nextInt();
        
        perfectNum.isPerfect(numUser, div.divisores(numUser));
        
    }    
}
