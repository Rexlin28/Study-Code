/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tiendaderopa;

/**
 *
 * @author User
 */
public class TestShirt {
    public int orderID = 0;
    public double price = 0.00;
    public char color = 'N';
    public String description = "No description avaliable";
    public int stock = 0;
    
    public void printInformation(){
        System.out.println("Order ID: "+ orderID);
        System.out.println("Price; "+ price);
        System.out.println("Color: "+ color);
        System.out.println("Description: "+ description);
        System.out.println("Stock: "+ stock);
    }
}
