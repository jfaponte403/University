package numerosperfectosarray;

public class isPerfectNum {
    public boolean isPerfect(int numUser){
        int aux = 0;
        for (int i = 1; i < numUser; i++) {
            if(numUser % i == 0){
                aux += i;
            }
        }
        return aux == numUser;
    }
}
