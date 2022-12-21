package numerosqueserepiten;

public class NumerosQueSeRepiten {

    public static void main(String[] args) {
        GetTamOfVec tam = new GetTamOfVec();
        tam.setTamOfVec();
        Array arr = new Array(tam.getTamOfVec());
        NumOfRepeated numRep = new NumOfRepeated();
        Repeated reps = new Repeated();
        Mostrar getData = new Mostrar();
        getData.pintar(arr.getArr(), tam.getTamOfVec(), reps.isRepeated(arr.getArr(), tam.getTamOfVec(), numRep.numOfRep(arr.getArr(), tam.getTamOfVec())), numRep.numOfRep(arr.getArr(), tam.getTamOfVec()));
    }
    
}
