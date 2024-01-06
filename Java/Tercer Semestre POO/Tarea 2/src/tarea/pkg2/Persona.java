/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea.pkg2;

public class Persona {
    public int ageYears=32;
    
    public void calculateAge(){
        int ageDays=ageYears*365;
        long ageSeconds=ageYears*365*24L*60*60;
        long ageMinutes=ageSeconds / 60L;
        float ageMiliseconds=ageSeconds *1000L;
        System.out.println("you are "+ageDays+" days old");
        System.out.println("you are "+ageSeconds+" seconds old");
        System.out.println("you are "+ageMinutes+" minutes old");
        System.out.println("you are "+ageMiliseconds+" miliseconds old");
        
        System.out.println("********************************");
    }
}
