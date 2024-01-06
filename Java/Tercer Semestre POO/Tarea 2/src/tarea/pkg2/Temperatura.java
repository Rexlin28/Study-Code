/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea.pkg2;

public class Temperatura {
    float farenheit=0;
    
    public void calcularCelsius(){
        farenheit=(farenheit-32)*5/9;
        System.out.println(farenheit);
    }
}
