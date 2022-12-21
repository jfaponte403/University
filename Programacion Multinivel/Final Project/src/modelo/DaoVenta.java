package modelo;

import java.sql.*;


public class DaoVenta extends Conexion {
    
    public boolean agregar(DtoVenta p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO venta (id_vendedor, id_cliente, id_tipo_pago, fecha, monto) VALUES(?,?,?,?,?)";
        try{
            ops = con.prepareStatement(stm);
            ops.setString(1, p.getIdVendedor());
            ops.setString(2, p.getIdCliente());
            ops.setInt(3, p.getIdTipoPago());
            ops.setDate(4, (Date) p.getFecha());
            ops.setLong(5, p.getMonto());
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println("\nError al ejecutar sentencia SQL... "+e);
            return false;
        }        
    }
    
    public boolean modificar(DtoVenta p){        
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE venta SET id_vendedor=?, id_cliente=?, id_tipo_pago=?, fecha=?, monto=?  WHERE id=?";
        try{
            ops = con.prepareStatement(stm);            
            ops.setString(1, p.getIdVendedor());
            ops.setString(2, p.getIdCliente());
            ops.setInt(3, p.getIdTipoPago());
            ops.setDate(4, (Date) p.getFecha());
            ops.setLong(5, p.getMonto());
            ops.execute();
            return true;
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }
    
    public boolean consultar(DtoVenta p){
        
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM venta WHERE id=?";
        try{
            ops = con.prepareStatement(stm);
            ops.setInt(1, p.getId());            
            rs=ops.executeQuery();
            if(rs.next()){
                p.setId(Integer.parseInt(rs.getString("id")));
                p.setIdVendedor(rs.getString("id_vendedor"));
                p.setIdCliente(rs.getString("id_cliente"));
                p.setIdTipoPago(Integer.parseInt(rs.getString("id_tipo_pago")));
                p.setFecha(Date.valueOf(rs.getString("fecha")));
                p.setMonto(Long.valueOf(rs.getString("monto")));
                
                return true;
            }
            return false;            
        }catch(SQLException e){
            System.err.println(e);
            return false;
        }        
    }
    
    public boolean eliminar(DtoVenta p){
        
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
    
    public ResultSet getVenta(String filtro) {
        ResultSet resultado = null;
        PreparedStatement preparedStatement = null;
        Connection connection = getConexion();
        
        // En caso de que se haga una busqueda
        if (filtro != "") filtro = "WHERE " + filtro;
        
        String cadenaSQL = "SELECT * FROM venta " + filtro;
        
        try {
            preparedStatement = connection.prepareStatement(cadenaSQL);
            resultado = preparedStatement.executeQuery();
        } catch (SQLException ex) {
            System.out.println("Error: Consulta de la lista de clientes fallida: " + ex);
            System.out.println("CadenaSQL: "+ cadenaSQL);
        }
        return resultado;
    }
    
}

