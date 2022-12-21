package modelo;

import java.sql.*;

public class DaoTipo_Pago extends Conexion {
    
    public boolean registrar(DtoTipo_Pago p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO Tipo_pago (tipo_pago) VALUES(?)";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getTipo_pago());
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println("\nError al ejecutar sentencia SQL... "+e);
            return false;
        }        
    }
    
    public boolean modificar(DtoTipo_Pago p){        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE Pago SET tipo_pago=? WHERE id=?";
        try{
            ops = con.prepareStatement(stm);            
            ops.setInt(1, p.getTipo_pago());
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }
    
    public boolean consultar(DtoTipo_Pago p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM tipo_pago WHERE id=?";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getId());            
            rs=ops.executeQuery();
            if(rs.next()){
                p.setId(Integer.parseInt(rs.getString("id")));
                p.setTipo_pago((char) Integer.parseInt(rs.getString("id_venta")));
                return true;
            }
            return false;            
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }
    
    public boolean eliminar(DtoTipo_Pago p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "DELETE FROM tipo_pago WHERE id=?";
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
