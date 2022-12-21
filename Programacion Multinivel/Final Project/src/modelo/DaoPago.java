package modelo;

import java.sql.*;

public class DaoPago extends Conexion {
    
    public boolean registrar(DtoPago p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO pago (id_venta,monto) VALUES(?,?)";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getId_venta());
            ops.setLong(2, p.getMonto());
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println("\nError al ejecutar sentencia SQL... "+e);
            return false;
        }        
    }
    
    public boolean modificar(DtoPago p){        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE pago SET id_venta=?,monto=? WHERE id=?";
        try{
            ops = con.prepareStatement(stm);            
            ops.setInt(1, p.getId_venta());
            ops.setLong(2, p.getMonto());
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }
    
    public boolean consultar(DtoPago p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM pago WHERE id=?";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getId());            
            rs=ops.executeQuery();
            if(rs.next()){
                p.setId(Integer.parseInt(rs.getString("id")));
                p.setId_venta(Integer.parseInt(rs.getString("id_venta")));
                p.setMonto(Integer.parseInt(rs.getString("tipp")));
                return true;
            }
            return false;            
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }
    
    public boolean eliminar(DtoPago p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "DELETE FROM pago WHERE id=?";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getId());            
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }   
    
}
