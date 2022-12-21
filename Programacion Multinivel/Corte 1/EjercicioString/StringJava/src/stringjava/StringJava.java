package stringjava;

public class StringJava {

    public static void main(String[] args) {
        GetString text = new GetString();
        GetLenghtString lenghtString = new GetLenghtString();
        Print mostrar = new Print();
        SubString subText = new SubString();
        SubStringNToM subTextNtoM = new SubStringNToM();
        CaracterN caracter = new CaracterN();
        ContainString contain = new ContainString();
        
        text.setText();
        mostrar.mostrar(text.getText(), lenghtString.getLengt(text.getText()));
        mostrar.mostrar(text.getText(), subText.subStringMeth(text.getText()));
        mostrar.mostrar(text.getText(), subTextNtoM.stringNtoM(text.getText()));
        mostrar.mostrar(text.getText(), caracter.caracter(text.getText()));
        mostrar.mostrar(text.setAndGetText(), text.setAndGetText(), text.setAndGetText());
        String s1 = text.setAndGetText();
        String s2 = text.setAndGetText();
        mostrar.mostrar(s1, s2, contain.containString(s1, s2));
        
    }
    
}
