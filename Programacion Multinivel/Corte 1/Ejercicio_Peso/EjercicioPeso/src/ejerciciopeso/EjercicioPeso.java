package ejerciciopeso;

import java.util.Scanner;

public class EjercicioPeso {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Ingrese el nombre");
        String nameUser = sc.nextLine();
        
        System.out.println("Ingrese el peso");
        float weightUser = sc.nextFloat();
        
        System.out.println("Ingrese la altura");
        float heightUser = sc.nextFloat();
        
        Persona person1 = new Persona(nameUser, weightUser, heightUser);
        // Persona person1 = new Persona("Jhonattan", (float) 64.5, (float) 1.75);
        
        Indice index = new Indice();
        IsFat fat = new IsFat();
        
        System.out.println("DATOS");
        System.out.println("Nombre: " + person1.getName());
        System.out.println("Peso: " + person1.getWeight() + "kg");
        System.out.println("Altura: " + person1.getHeight() + "m");
        System.out.print("Estado: ");
        fat.isFat(index.getIndice(person1.getWeight(), person1.getHeight()));
    }
}
