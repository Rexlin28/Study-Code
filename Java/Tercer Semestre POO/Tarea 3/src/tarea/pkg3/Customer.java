/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea.pkg3;

public class Customer {
    public int customerID=0;
    public String name="-name requiered-";
    public String address="-address requiered-";
    public String phoneNumber="-phone requiered-";
    public String emailAddress="-email requiered-";
    public char status='N';
    public double totalPurchases=0.0;
    
    public void displayCustomerInfo(){
        System.out.println("Customer ID: "+customerID);
        System.out.println("Name: "+name);
        System.out.println("Address: "+address);
        System.out.println("Phone Number: "+phoneNumber);
        System.out.println("Email: "+emailAddress);
        System.out.println("Status: "+status);
        System.out.println("Purchases: "+totalPurchases);
        System.out.println("**************************");
    }
}
