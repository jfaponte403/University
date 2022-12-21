package numerosqueserepiten;


public class Mostrar {
    public void pintar(int[] vec, int tamVec, int[] vecRep, int numRep){
        System.out.println("Su vector es: ");
        for (int i = 0; i < tamVec; i++) {
            System.out.print("[" + vec[i] + "]");
        }
        System.out.println("");
        System.out.println("Las pos repetidas son");
        for (int i = 0; i < (numRep); i++) {
            System.out.println("El numero: " + vec[vecRep[i]] + " Esta repetido en la pos " + vecRep[i] );
        }
    }
}
