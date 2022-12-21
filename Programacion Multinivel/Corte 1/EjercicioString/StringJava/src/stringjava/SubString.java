/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package stringjava;

/**
 *
 * @author administradorPC
 */
public class SubString {
    public String subStringMeth(String text){
        if(text.length() > 9 ){
           return text.substring(9);
        }
        return null;
    }
}
