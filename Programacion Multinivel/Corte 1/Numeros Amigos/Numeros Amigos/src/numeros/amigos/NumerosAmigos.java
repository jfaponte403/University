package numeros.amigos;

public class NumerosAmigos {

    public static void main(String[] args) {
        
        DivisoresDeX div = new DivisoresDeX();
        areFriends fri = new areFriends();
        GetNumero numUser = new GetNumero();
        Mostrar mostrar = new Mostrar();
        
        int x = numUser.getNum();
        int y = numUser.getNum();
        
        mostrar.mostrar(fri.friendsNums(x, div.divisores(x), y, div.divisores(y)), x, y);
    }
    
}
