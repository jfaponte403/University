package ejercicioprofesorv2;

public class EjercicioProfesorV2 {

    public static void main(String[] args) {
        Mostrar getPrint = new Mostrar();
        CapturarDatos getData = new CapturarDatos();
        Profesor[] arrProf = new Profesor[getData.capturarTamVec()];
        getData.capturarDatosProf(arrProf);
        getPrint.mostrar(arrProf);
    }    
}
