/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package taller.pkg13.trabajadores;

import java.time.Duration;
import java.time.LocalDate;


/**
 *
 * @author Jhonattan
 */
public class Calcular {
    
    public double valorPrima(Trabajador vec){
        
        LocalDate fechaInicio = vec.getDataStart();
        LocalDate fechaActual = LocalDate.now();
        
        Duration dias = Duration.between(fechaInicio.atStartOfDay(), fechaActual.atStartOfDay());
        Long daysOnWork = dias.toDays();
        double prima = 0.0;
        
        
        if (daysOnWork > 365) {
            prima = vec.getSalario() * 365 / 360;
        } else {
            prima = vec.getSalario() * daysOnWork / 360;
        }
        
        return prima;
    }
}
