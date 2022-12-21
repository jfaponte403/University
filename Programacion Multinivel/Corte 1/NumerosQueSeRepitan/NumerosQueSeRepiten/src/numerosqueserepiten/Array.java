package numerosqueserepiten;

import java.util.Scanner;

public class Array {
    Scanner sr = new Scanner(System.in);
    private int[] arr;
    public Array(int tam) {
        arr = new int[tam];
        for (int i = 0; i < tam; i++) {
            System.out.println("Ingrese un numero");
            arr[i] = sr.nextInt();
        }
    }

    public int[] getArr() {
        return arr;
    }

    public void setArr(int[] arr) {
        this.arr = arr;
    }
    
}
