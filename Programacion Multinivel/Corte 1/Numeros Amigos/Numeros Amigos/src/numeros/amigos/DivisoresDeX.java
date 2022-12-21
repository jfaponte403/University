package numeros.amigos;

public class DivisoresDeX {
    public int divisores(int x){
        int sumOfD = 0;
        
        for (int i = 1; i < x; i++) {
            if(x % i == 0){
                sumOfD += i;
            }
        }
        
        return sumOfD;
    }
}
