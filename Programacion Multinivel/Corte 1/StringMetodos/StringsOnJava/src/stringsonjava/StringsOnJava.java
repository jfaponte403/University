package stringsonjava;

public class StringsOnJava {
    public static void main(String[] args) {
        GestorDeCadena text = new GestorDeCadena();
        
        text.setText();
        text.mostrar(text.getText(), text.getLengt(text.getText()));
        text.mostrar(text.getText(), text.subStringMeth(text.getText()));
        text.mostrar(text.getText(), text.stringNtoM(text.getText()));
        text.mostrar(text.getText(), text.caracter(text.getText()));
        text.mostrar(text.setAndGetText(), text.setAndGetText(), text.setAndGetText());
        
        String s1 = text.setAndGetText();
        String s2 = text.setAndGetText();
        text.mostrar(s1, s2, text.containString(s1, s2));
    }
}

