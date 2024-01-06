
package tarea.pkg6;

public class DateThree {
    public int date=0;
    
    public void displayDay(){
        switch(date){
            case 1:
                System.out.println("El dia de hoy es: Lunes");
                break;
            
            case 2:
                System.out.println("El dia de hoy es: Martes");
                break;
                
            case 3:
                System.out.println("El dia de hoy es: Miercoles");
                break;
                
            case 4:
                System.out.println("El dia de hoy es: Jueves");
                break;
                
            case 5:
                System.out.println("El dia de hoy es: Viernes");
                break;
                
            case 6:
                System.out.println("El dia de hoy es: Sabado");
                break;
            
            case 7:
                System.out.println("El dia de hoy es: Domingo");
                break;
                
            default:
                System.out.println("ERROR! WRONG DATE");
                break;
        }
    }
}
