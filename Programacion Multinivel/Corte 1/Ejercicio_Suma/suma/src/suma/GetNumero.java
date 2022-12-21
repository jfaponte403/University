package suma;

import java.util.Scanner;

public class GetNumero {
    public int getNumero() {
        int numero;
        Scanner sc = new Scanner(System.in);
        System.out.flush();
        System.out.println("Ingrese un numero \n");
        numero = sc.nextInt();
        
        return numero;
    }
}
