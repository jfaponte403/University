package ejerciciopeso;

public class Indice {
    public float getIndice(float weight, float height){
        float indice = weight / (height * height);
        return indice;
    }
}
