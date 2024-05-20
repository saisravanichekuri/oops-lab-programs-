/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package selfdrivingcar;

/**
 *
 * @author gulli
 */



import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JOptionPane;

public class DBconnection {
    

    public static Connection getConnection(){
        
        String url = "jdbc:mysql://localhost:3306/car";
        String user = "root";
        String password = "Sravani@123";
        
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            return DriverManager.getConnection(url, user, password);
        }catch(SQLException e){
            JOptionPane.showMessageDialog(null, "Database not connected: " + e.getMessage());
            System.out.println(e.getMessage());
            return null;
        } catch (ClassNotFoundException ex) {
            JOptionPane.showMessageDialog(null, "Database not connected: " + ex.getMessage());
            Logger.getLogger(DBconnection.class.getName()).log(Level.SEVERE, null, ex);
            return null;
        }
    }
}

