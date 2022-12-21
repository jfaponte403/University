package modelo;

import java.sql.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class DaoCliente extends Conexion{
    public boolean agregar(DtoCliente cliente) {
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO cliente (identificacion, nombre, apellido, edad, correo) VALUES (?, ?, ?, ?, ?)";
        try {
            ops = con.prepareStatement(stm);
            ops.setString(1, cliente.getIdentificacion());
            ops.setString(2, cliente.getNombre());
            ops.setString(3, cliente.getApellido());
            ops.setInt(4, cliente.getEdad());
            ops.setString(5, cliente.getCorreo());
            ops.execute();
            return true;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }
    
    public boolean modificar(DtoCliente cliente) {
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE cliente SET nombre=?, apellido=?, edad=?, correo=? WHERE identificacion=?" ;
        try {
            ops = con.prepareStatement(stm);
            ops.setString(1, cliente.getNombre());
            ops.setString(2, cliente.getApellido());
            ops.setInt(3, cliente.getEdad());
            ops.setString(4, cliente.getCorreo());
            ops.setString(5, cliente.getIdentificacion());
            ops.execute();
            return true;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }
    
    public boolean consultar(DtoCliente cliente) {
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM cliente WHERE identificacion=?" ;
        try {
            ops = con.prepareStatement(stm);
            ops.setString(1, cliente.getIdentificacion());
            rs = ops.executeQuery();
            if (rs.next()) {
                cliente.setIdentificacion(rs.getString("identificacion"));
                cliente.setNombre(rs.getString("nombre"));
                cliente.setApellido(rs.getString("apellido"));
                cliente.setEdad(Integer.parseInt(rs.getString("edad")));
                cliente.setCorreo(rs.getString("correo"));
                return true;
            }
            return false;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }
    
    public boolean eliminar(DtoCliente cliente) {
        PreparedStatement ops = null;
        Connection con = getConexion();
        String stm = "DELETE FROM cliente WHERE identificacion=?" ;
        try {
            ops = con.prepareStatement(stm);
            ops.setString(1, cliente.getIdentificacion());
            ops.execute();
            return true;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }
    
    public ResultSet getClientes(String filtro) {
        ResultSet resultado = null;
        PreparedStatement preparedStatement = null;
        Connection connection = getConexion();
        
        // En caso de que se haga una busqueda
        if (filtro != "") filtro = "WHERE "+ filtro;
        
        String cadenaSQL = "SELECT * FROM cliente "+ filtro;
        
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
