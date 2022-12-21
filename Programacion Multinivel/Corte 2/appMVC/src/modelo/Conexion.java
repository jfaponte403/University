package modelo;

import javax.swing.JOptionPane;
import java.sql.*;

public class Conexion {
    private String BD = "productos";
    private String HOST = "localhost";
    private String USUARIO = "root";
    private String CLAVE = "";
    private String URL = "jdbc:mysql://" + HOST + ":3306" + BD;
    private String DRIVER = "com.mysql.jdbc.Driver";
    private Connection conn = null;
    
    public Connection getConexion(){
        try {
            Class.forName("DRIVER");
            conn = (Connection) DriverManager.getConnection(this.URL, this.USUARIO, this.CLAVE);
        } catch (SQLException | ClassNotFoundException se) {
            JOptionPane.showConfirmDialog(null, "Error al conectar con BD");
        }
        return conn;
    }
}
