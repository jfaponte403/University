/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.time.LocalDate;

/**
 *
 * @author Lenovo
 */
public class DaoReportes extends Conexion {
    
    public ResultSet getVentasDia() {
        ResultSet resultado = null;
        PreparedStatement preparedStatement = null;
        Connection connection = getConexion();
        String cadenaSQL = "SELECT sucursal.nombre as sucursal, vendedor.nombre, vendedor.apellido, venta.monto\n" +
                            "FROM vendedor\n" +
                            "INNER JOIN sucursal ON vendedor.id_sucursal = sucursal.id\n" +
                            "INNER JOIN venta ON vendedor.identificacion = venta.id_vendedor\n"+ 
                            "WHERE venta.fecha = '"+ LocalDate.now() +"'";
        
        try {
            preparedStatement = connection.prepareStatement(cadenaSQL);
            resultado = preparedStatement.executeQuery();
        } catch (SQLException ex) {
            System.out.println("Error: Consulta de la lista de clientes fallida: "+ ex);
            System.out.println("CadenaSQL: "+ cadenaSQL);
        }
        return resultado;
    }
    
    public ResultSet getVentasAnio(String filtro) {
        ResultSet resultado = null;
        PreparedStatement preparedStatement = null;
        Connection connection = getConexion();
        
        String cadenaSQL = "SELECT sucursal.nombre as sucursal, venta.fecha , venta.monto\n" +
                            "FROM vendedor\n" +
                            "INNER JOIN sucursal ON vendedor.id_sucursal = sucursal.id\n" +
                            "INNER JOIN venta ON vendedor.identificacion = venta.id_vendedor\n" +
                            "WHERE venta.fecha BETWEEN '" + filtro + "/01/01' AND '" + filtro + "/12/31'";
        
        try {
            preparedStatement = connection.prepareStatement(cadenaSQL);
            resultado = preparedStatement.executeQuery();
        } catch (SQLException ex) {
            System.out.println("Error: Consulta de la lista de clientes fallida: "+ ex);
            System.out.println("CadenaSQL: "+ cadenaSQL);
        }
        return resultado;
    }
}
