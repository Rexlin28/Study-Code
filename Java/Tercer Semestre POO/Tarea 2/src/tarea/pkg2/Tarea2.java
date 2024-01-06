/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea.pkg2;

/**
 *
 * @author User
 */
public class Tarea2 {

    public static void main(String[] args) {
        
        Persona dude1= new Persona();
        Persona dude2= new Persona();
        Persona dude3= new Persona();
        
        dude1.ageYears=1;
        dude2.ageYears=24;
        dude3.ageYears=100;
        
        dude1.calculateAge();
        dude2.calculateAge();
        dude3.calculateAge();
    }
    
}
