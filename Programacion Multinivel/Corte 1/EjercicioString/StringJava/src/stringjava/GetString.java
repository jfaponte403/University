package stringjava;

import java.util.Scanner;


public class GetString {
    Scanner sr = new Scanner(System.in);
    private String text;

    public String getText() {
        return text;
    }

    public void setText() {
        System.out.println("Ingrese un texto");
        this.text = sr.nextLine();
    }
    
    public String setAndGetText(){
        System.out.println("Ingrese un texto");
        this.text = sr.nextLine();
        
        return text;
    }
}
