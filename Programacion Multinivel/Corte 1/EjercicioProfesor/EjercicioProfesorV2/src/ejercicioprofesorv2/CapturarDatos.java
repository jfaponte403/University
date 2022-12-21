package ejercicioprofesorv2;

import java.util.Scanner;



public class CapturarDatos {
    Scanner sr = new Scanner(System.in);
    
    public int capturarTamVec(){
        System.out.println("Indique la cantidad de profesores de la universidad");
        int x = sr.nextInt();
        return x;
    }
    
    public void capturarDatosProf(Profesor[] vec){
        for (int i = 0; i < vec.length; i++) {
            vec[i] = new Profesor();
            
            System.out.println("Ingrese el nombre " + (i+1));
            vec[i].setName(sr.next());

            System.out.println("Ingrese el id " + (i+1));
            vec[i].setId(sr.nextInt());

            System.out.println("Ingrese el salario " + (i+1));
            vec[i].setSalary(sr.nextLong());            
        }
    }
}
