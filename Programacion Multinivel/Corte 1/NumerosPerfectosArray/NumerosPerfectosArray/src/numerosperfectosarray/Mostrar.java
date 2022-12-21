package numerosperfectosarray;

public class Mostrar {
    isPerfectNum isP = new isPerfectNum();
    public void mostrarVec(int tamVec, int[] vec){
        System.out.println("Su vector es: ");
        for (int i = 0; i < tamVec; i++) {
            System.out.print("[" + vec[i] + "]");
        }
        System.out.println("");
    }
    
    public void mostrarPerfect(int tamVec, int[] vec){
        for (int i = 0; i < tamVec; i++) {
            if (isP.isPerfect(vec[i])) {
                System.out.println(vec[i] + ", Es perfecto");
            } else {
                System.out.println(vec[i] + ", No perfecto");
            }
        }
    }
}
