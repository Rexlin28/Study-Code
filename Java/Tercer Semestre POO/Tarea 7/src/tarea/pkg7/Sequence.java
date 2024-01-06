
package tarea.pkg7;

public class Sequence {
    public void displaySequence(){
        int i=0;
        int number=1;
        int numberBefore=0;
        int numberAfter=0;
        while(i<10){
            number+=numberBefore;
            numberBefore=numberAfter;
            numberAfter=number;
            System.out.println(number);
            i++;
        }
    }
}
