package ejerciciopeso;

public class IsFat {
    public void isFat(float x){
        if(x < 16){
            System.out.println("Delgadez severa");
        }
        if(x == 16 && x < 17){
            System.out.println("Delgadez moderada");
        }
        if(x == 17 && x < 18.5){
            System.out.println("Delgadez leve");
        }
        if(x == 18.5 && x < 25){
            System.out.println("Peso normal");
        }
        if(x == 25 && x < 30){
            System.out.println("Sobrepeso");
        }
        if(x == 30 && x < 35){
            System.out.println("Obesidad leve");
        }        
        if(x == 35 && x < 40){
            System.out.println("Obesidad moderada");
        }
        if(x >= 40){
            System.out.println("Obesidad morbida");
        }
    }
}
