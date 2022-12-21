/*s
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package parcial;

/**
 *
 * @author Jhonattan
 */
public class Amstrong {
    public boolean isAmstrong(int x){
        int aux = x;
        int count = 1;
        int aux0 = x;
        int aux2 = 0;
        int total = 0;
        while(aux / 10 != 0){
            //System.out.println("Valor: " + aux);
            aux = aux / 10;
            count++;
        }
        
        //System.out.println("Su numero es de " + count + " Cifras");
        int[] vec = new int[count];
        
        
        while(aux0 > 0){
            //System.out.println("Cifra " + aux0 % 10);
            vec[aux2] = aux0 % 10;
            aux0 = aux0 / 10;
            aux2++;
        }
        
        for (int i = 0; i < vec.length; i++) {
            total += numeroAlaX(vec[i], count);
        }
        
        return total == x;
    }
    
    public int numeroAlaX(int x, int vez){
        int a = x;
        for (int i = 0; i < vez - 1; i++) {
            a = x * a;
        }
        return a;
    }
}

