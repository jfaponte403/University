package modelo;

import java.sql.*;

public class DaoSucursal extends Conexion{
    public boolean agregar(DtoSucursal sucursal){
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO sucursal (nombre, id_ciudad) VALUES(?,?)";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setString(1, sucursal.getNombre());
            ops.setInt(2, sucursal.getIdCiudad());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }
    
    public boolean modificar(DtoSucursal sucursal){
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE sucursal SET nombre = ?, id_ciudad = ? WHERE id = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setString(1, sucursal.getNombre());
            ops.setInt(2, sucursal.getIdCiudad());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }
    
    public boolean consultar(DtoSucursal sucursal){
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM sucursal WHERE id = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, sucursal.getId());
            rs = ops.executeQuery();
            if(rs.next()){
                sucursal.setId(Integer.parseInt(rs.getString("id")));
                sucursal.setNombre(rs.getString("nombre"));
                sucursal.setIdCiudad(Integer.parseInt(rs.getString("id_ciudad")));
                return true;
            }
            return false;   
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }

    public boolean eliminar(DtoSucursal sucursal){
        PreparedStatement ops = null;
        Connection con = getConexion();
        String stm = "DELETE FROM sucursal WHERE id = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, sucursal.getId());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }   
    }    
    
    public ResultSet getSucursales(String filtro) {
        ResultSet resultado = null;
        PreparedStatement preparedStatement = null;
        Connection connection = getConexion();
        
        // En caso de que se haga una busqueda
        if (filtro != "") filtro = "WHERE "+ filtro;
        
        String cadenaSQL = "SELECT * FROM sucursal"+ filtro;
        
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

