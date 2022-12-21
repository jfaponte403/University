package numerosperfectosarray;

public class NumerosPerfectosArray {

   public static void main(String[] args) {
       GetTamOfVec tamOfVec = new GetTamOfVec();
       tamOfVec.setTamOfVec();
       ArrayOfNums arr = new ArrayOfNums(tamOfVec.getTamOfVec());
       Mostrar imprimir = new Mostrar();
       
       imprimir.mostrarVec(tamOfVec.getTamOfVec(), arr.getArrOfNums());
       imprimir.mostrarPerfect(tamOfVec.getTamOfVec(), arr.getArrOfNums());
    }
    
}
