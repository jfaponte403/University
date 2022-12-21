package suma;

public class NewMain {

    public static void main(String[] args) {
        
        GetNumero numUser = new GetNumero();
        VerN mostrar = new VerN();
        SumaN sumUser = new SumaN();
        
        int x = numUser.getNumero();
        int y = numUser.getNumero();
        int r = sumUser.sumaN(x, y);
        
        mostrar.verN(x, y, r);
        
    }
    
}
