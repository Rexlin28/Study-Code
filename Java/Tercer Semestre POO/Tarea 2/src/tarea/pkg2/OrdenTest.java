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
public class OrdenTest {

    public static void main(String[] args) {
        Orden tacos=new Orden();
        tacos.int1=5;   tacos.int2=7; //Resultado Correcto
        tacos.calcularTotal();
        
        Orden burritos=new Orden();
        burritos.int1=25455;   burritos.int2=75984; //Resultado Correcto
        burritos.calcularTotal();
        
        Orden tamales=new Orden();
        tamales.int1=125354702; tamales.int2=348671049; //Resultado Incorrecto sin long, correcto con long
        tamales.calcularTotal();
    }
    
}
