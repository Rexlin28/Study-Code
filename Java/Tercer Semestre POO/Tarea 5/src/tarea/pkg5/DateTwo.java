/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea.pkg5;

public class DateTwo {
    int date = 0;
    
    public void displayDay(){
        if(date==1){
            System.out.println("El dia es: Lunes");
        }else{
            if(date==2){
                System.out.println("El dia es: Martes");
            }else{
                if(date==3){
                    System.out.println("El dia es: Miercoles");
                }else{
                    if(date==4){
                        System.out.println("El dia es: Jueves");
                    }else{
                        if(date==5){
                            System.out.println("El dia es: Viernes");
                        }else{
                            if(date==6){
                                System.out.println("El dia es: Sabado");
                            }else{
                                if(date==7){
                                    System.out.println("El dia es: Domingo");
                                }else{
                                    System.out.println("ERROR! INVALID DATE");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
