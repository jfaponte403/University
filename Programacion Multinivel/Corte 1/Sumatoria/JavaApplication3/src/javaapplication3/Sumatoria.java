package javaapplication3;

public class Sumatoria {
    public float sumatoria(int x){
        float res = 0;
        for (int i = 1; i <= x; i++) {
            res += (1 / (float) i);
        }
        return res;
    }
}
