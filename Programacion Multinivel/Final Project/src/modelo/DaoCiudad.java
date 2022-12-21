package modelo;

import java.sql.*;

public class DaoCiudad extends Conexion{
    public boolean registrar(DtoCiudad ciudad){
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO ciudad (ciudad) VALUES(?)";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setString(1, ciudad.getCiudad());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }
    
    public boolean modificar(DtoCiudad ciudad){
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE ciudad SET ciudad = ? WHERE id = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setString(1, ciudad.getCiudad());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }
    
    public boolean consultar(DtoCiudad ciudad){
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM ciudad WHERE id = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, ciudad.getId());
            rs = ops.executeQuery();
            if(rs.next()){
                ciudad.setId(Integer.parseInt(rs.getString("id")));
                ciudad.setCiudad(rs.getString("ciudad"));
                return true;
            }
            return false;   
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }

    public boolean eliminar(DtoCiudad ciudad){
        PreparedStatement ops = null;
        Connection con = getConexion();
        String stm = "DELETE FROM ciudad WHERE id = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, ciudad.getId());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }   
    }    
    
}
