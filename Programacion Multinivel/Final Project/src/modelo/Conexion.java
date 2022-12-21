package modelo;

import java.sql.*;

public class Conexion {
    private String BD = "multinivel";
    private String HOST = "localhost";
    private String USUARIO = "root";
    private String CLAVE = "";
    private String URL = "jdbc:mysql://" + HOST + ":3306/" + BD;
    private String DRIVER = "com.mysql.jdbc.Driver";
    
    private Connection conn = null;
    
    public Connection getConexion(){
        try {
            Class.forName(DRIVER);
            conn = (Connection) DriverManager.getConnection(this.URL, this.USUARIO, this.CLAVE);
        } catch (SQLException | ClassNotFoundException e) {
            System.out.println("Error: No se conecto a la base de datos."+ e);
        }
        return conn;
    }
}