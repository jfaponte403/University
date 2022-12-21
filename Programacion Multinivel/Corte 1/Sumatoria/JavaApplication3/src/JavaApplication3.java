import java.util.Scanner;
import javaapplication3.Sumatoria;

package javaapplication3;

public class JavaApplication3 {
    public static void main(String[] args) {
        System.out.println("Ingrese el numero");
        Scanner sr = new Scanner(System.in);
        int numUser = sr.nextInt();
        
        Sumatoria sumatoria = new Sumatoria();
        
        System.out.println("La sumatoria de la sucesion hasta " + numUser + " es: ");
        System.out.println("== " + sumatoria.sumatoria(numUser));
    }
}
