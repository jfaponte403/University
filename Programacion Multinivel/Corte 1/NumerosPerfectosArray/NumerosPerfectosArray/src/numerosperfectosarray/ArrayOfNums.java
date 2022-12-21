package numerosperfectosarray;

import java.util.Scanner;

public class ArrayOfNums {
    Scanner sr = new Scanner(System.in);
    private int[] arrOfNums;
    
    public ArrayOfNums(int tam) {
        arrOfNums = new int[tam];
        for (int i = 0; i < tam; i++) {
            System.out.println("Ingrese un numero " + (i+1));
            arrOfNums[i] = sr.nextInt();
        }
    }

    public int[] getArrOfNums() {
        return arrOfNums;
    }

    public void setArrOfNums(int[] arrOfNums) {
        this.arrOfNums = arrOfNums;
    }
    
}
