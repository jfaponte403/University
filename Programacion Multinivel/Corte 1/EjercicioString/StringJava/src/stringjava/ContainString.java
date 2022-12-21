/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package stringjava;

/**
 *
 * @author administradorPC
 */
public class ContainString {
    public int containString(String text1, String text2){
        
        if(text1.contains(text2)){
            return text1.indexOf(text2);
        }
        
        if(text2.contains(text1)){
            return text2.indexOf(text1);
        }
        
        return -1;
    }
}
