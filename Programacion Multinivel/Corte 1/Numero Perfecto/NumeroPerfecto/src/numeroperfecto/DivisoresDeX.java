package numeroperfecto;

public class DivisoresDeX {
    public int divisores(int x){
        int sumOfD = 0, aux = 1;
        
        do{
            if(x % aux == 0){
                sumOfD = sumOfD + aux;
            }
            aux++;
        }while(aux < x);
        
        return sumOfD;
    }
}
