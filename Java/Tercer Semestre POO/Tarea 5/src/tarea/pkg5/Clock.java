package tarea.pkg5;

public class Clock {
    public int currentTime=0;
    
    public void displayPartOfDay(){
        if(currentTime>=0 && currentTime<=800){
            System.out.println("Es de Madrugada");
        }else{
            if(currentTime>=801 && currentTime<=1200){
                 System.out.println("Es de Mañana");
            }else{
                if(currentTime>=1201 && currentTime<=1700){
                    System.out.println("Es de Tarde");
                }else{
                    if(currentTime>=1701 && currentTime<=2400){
                        System.out.println("Es de Noche");
                    }else{
                        System.out.println("ERROR! WRONG TIME");
                    }
                }
            }
        }
    }
}
