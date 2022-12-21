package modelo;

import java.sql.*;


public class DaoMoto_Venta extends Conexion {
    
    public boolean registrar(DtoMoto_Venta p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO moto_venta (id_venta, id_moto) VALUES(?,?)";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getId_venta());
            ops.setInt(2, p.getId_moto());
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println("\nError al ejecutar sentencia SQL... "+e);
            return false;
        }        
    }
    
    public boolean modificar(DtoMoto_Venta p){        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE moto_venta SET id_venta=?, id_moto=? WHERE id=?";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getId_venta());
            ops.setInt(2, p.getId_moto());
            ops.setInt(3, p.getId());
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }
    
    public boolean consultar(DtoMoto_Venta p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM venta WHERE id=?";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getId());            
            rs=ops.executeQuery();
            if(rs.next()){
                p.setId_venta(Integer.parseInt(rs.getString("id_venta")));
                p.setId_moto(Integer.parseInt(rs.getString("id_moto")));
                return true;
            }
            return false;            
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }
    
    public boolean eliminar(DtoMoto_Venta p){
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "DELETE FROM venta WHERE id=?";
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

