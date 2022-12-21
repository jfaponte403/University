/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package taller.pkg13.trabajadores;

/**
 *
 * @author Jhonattan
 */
public class Taller13Trabajadores {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        CapturarDatos getData = new CapturarDatos();
        Trabajador[] arrTra = new Trabajador[getData.getTam()];
        Mostrar getPrint = new Mostrar();
        getData.getDataEmploys(arrTra);
        getPrint.getPrint(arrTra);
        
    }
    
}
