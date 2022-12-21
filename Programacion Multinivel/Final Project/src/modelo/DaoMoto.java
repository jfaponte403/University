package modelo;

import java.sql.*;

public class DaoMoto extends Conexion {
    public boolean agregar(DtoMoto moto) {
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "INSERT INTO moto (modelo, linea, cilindraje) VALUES (?, ?, ?)";
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, moto.getModelo());
            ops.setString(2, moto.getLinea());
            ops.setInt(3, moto.getCilindraje());
            ops.execute();
            return true;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }
    
    public boolean modificar(DtoMoto moto) {
        PreparedStatement ops;
        Connection con = getConexion();
        String stm = "UPDATE moto SET modelo=?, linea=?, cilindraje=? WHERE id=?" ;
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, moto.getModelo());
            ops.setString(2, moto.getLinea());
            ops.setInt(3, moto.getCilindraje());
            ops.setInt(4, moto.getId());
            ops.execute();
            return true;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }
    
    public boolean consultar(DtoMoto moto) {
        PreparedStatement ops;
        Connection con = getConexion();
        ResultSet rs;
        String stm = "SELECT * FROM moto WHERE id=?" ;
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, moto.getId());
            rs = ops.executeQuery();
            if (rs.next()) {
                moto.setId(Integer.parseInt(rs.getString("id")));
                moto.setModelo(Integer.parseInt(rs.getString("modelo")));
                moto.setLinea(rs.getString("linea"));
                moto.setCilindraje(Integer.parseInt(rs.getString("cilindraje")));
                return true;
            }
            return false;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }
    
    public boolean eliminar(DtoMoto moto) {
        PreparedStatement ops = null;
        Connection con = getConexion();
        String stm = "DELETE FROM moto WHERE id=?" ;
        try {
            ops = con.prepareStatement(stm);
            ops.setInt(1, moto.getId());
            ops.execute();
            return true;
        } catch (SQLException e) {
            System.out.println(e);
            return false;
        }
    }
    
    public ResultSet getMotos(String filtro) {
        ResultSet resultado = null;
        PreparedStatement preparedStatement = null;
        Connection connection = getConexion();
        
        // En caso de que se haga una busqueda
        if (filtro != "") filtro = "WHERE "+ filtro;
        
        String cadenaSQL = "SELECT * FROM moto "+ filtro;
        
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
