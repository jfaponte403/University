package modelo;

import java.sql.*;

public class DaoProductos extends Conexion{
    public boolean registrar(DtoProducto p){
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO productos (codP, desP, tipP, canP, valP) VALUES(?,?,?,?,?)";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getCodigo());
            ops.setString(2, p.getDescripcion());
            ops.setInt(3, p.getTipo());
            ops.setFloat(4, p.getStock());
            ops.setFloat(5, p.getValor());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }
    
    public boolean modificar(DtoProducto p){
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE productos SET desP = ?, tipP = ?, canP = ?, valP = ? WHERE codP = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getCodigo());
            ops.setString(2, p.getDescripcion());
            ops.setInt(3, p.getTipo());
            ops.setFloat(4, p.getStock());
            ops.setFloat(5, p.getValor());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }
    
    public boolean consultar(DtoProducto p){
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM producto WHERE codP = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getCodigo());
            rs = ops.executeQuery();
            if(rs.next()){
                p.setCodigo(Integer.parseInt(rs.getString("codP")));
                p.setDescripcion(rs.getString("desP"));
                p.setTipo(Integer.parseInt(rs.getString("tipP")));
                p.setStock(Float.parseFloat(rs.getString("canP")));
                p.setStock(Float.parseFloat(rs.getString("valP")));
                return true;
            }
            return false;   
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }
    }

    public boolean eliminar(DtoProducto p){
        PreparedStatement ops = null;
        Connection con = getConexion();
        String stm = "DELETE FROM producto WHERE codP = ?";
        
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getCodigo());
            ops.execute();
            
            return true;    
        } catch (SQLException e) {
            System.err.println(e);
            return false;
        }   
    }    
    
}
