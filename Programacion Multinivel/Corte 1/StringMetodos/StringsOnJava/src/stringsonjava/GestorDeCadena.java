/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package stringsonjava;

import java.util.Scanner;

/**
 *
 * @author Jhonattan
 */
public class GestorDeCadena{
        Scanner sr = new Scanner(System.in);
        private String text;
        
        public char caracter(String text){
            System.out.println("Ingrese el numero de la pos que desea extrar su caracter");
            int x = sr.nextInt();
        
            if(x > text.length()){
                return 0;
            }
            return text.charAt(x);
        }
        
        public int containString(String text1, String text2){
            if(text1.contains(text2)){
                return text1.indexOf(text2);
            }
            if(text2.contains(text1)){
                return text2.indexOf(text1);
            }
            return -1;
        }
        
        public int getLengt(String text){
            return text.length();
        }
        
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
        
        public void mostrar(String text, int x){
            System.out.println("Su cadena de texto es: [" + text + "]" + ", Tiene: " + x + " caracteres");     
        }
        
        public void mostrar(String text, String textLenght){
            System.out.print("Su cadena de texto es: [" + text + "]");
            System.out.println(", su sub cadena es: [" + textLenght + "]");    
        }
    
        public void mostrar(String text, char x){
            System.out.print("Su cadena de texto es: [" + text + "]");
            System.out.println(", su caracter es: [" + x + "]"); 
        }
    
        public void mostrar(String x, String y, String z){
            System.out.println(x + " " + y + " " + z);
        }
    
        public void mostrar(String text1, String text2, int pos){
            System.out.println("Su cadena de texto es: [" + text1 + "]");
            System.out.println("Su cadena de texto es: [" + text2 + "]");
            System.out.println("Coindicen en la pos: " + pos);
        }
        
        public String subStringMeth(String text){
            if(text.length() > 9 ){
            return text.substring(9);
            }
            return null;
        }
        
        public String stringNtoM(String text){
            System.out.println("Ingrese un numero de inicio");
            int x = sr.nextInt();
        
            System.out.println("Ingrese un numero de cierre");
            int y = sr.nextInt();
        
            int aux = 0;
            if(x < y){
                aux = y;
                y = x;
                x = aux;
            }
        
            if(text.length() > x || text.length() > y){
                return null;
            }
        
            return text.substring(y, x);
        }
}
