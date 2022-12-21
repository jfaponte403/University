import java.util.Scanner;

public class TamOfVec {
    private int tamOfVec;
    Scanner sr = new Scanner(System.in);
    public void getQuantityOfNums(){
        System.out.println("Ingrese el tamanio del arreglo");
        int tamOfVec = sr.nextInt();
    }

    public int getTamOfVec() {
        return tamOfVec;
    }

    public void setTamOfVec(int tamOfVec) {
        this.tamOfVec = tamOfVec;
    }  
}
