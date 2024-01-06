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

public class TiendaDeRopa {

    public static void main(String[] args) {
        TestShirt aeroPostal;
        aeroPostal = new TestShirt();
        aeroPostal.printInformation();
        System.out.println("");
        
        aeroPostal.color = 'Y';
        aeroPostal.orderID = 1234;
        aeroPostal.description = "Nice shirt";
        aeroPostal.stock = 25;
        aeroPostal.price = 499.99;
        
        aeroPostal.printInformation();
    }
    
}
