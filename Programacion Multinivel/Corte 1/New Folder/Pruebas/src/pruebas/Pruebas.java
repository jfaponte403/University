/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pruebas;

import java.time.Duration;
import java.time.LocalDate;

/**
 *
 * @author Jhonattan
 */
public class Pruebas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        LocalDate fI = LocalDate.parse("2002-07-02");
        LocalDate fF = LocalDate.now();
        
        Duration dd = Duration.between(fI.atStartOfDay(), fF.atStartOfDay());
        
        System.out.println("Dias: " + dd.toDays());
    }
    
}
