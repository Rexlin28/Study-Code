
package tarea.pkg9;

public class SequenceThree {
    public void displaySequence(){
        int i=0;
        int number=1;
        int numberBefore=0;
        int numberAfter=0;
        do{
            number+=numberBefore;
            numberBefore=numberAfter;
            numberAfter=number;
            System.out.println(number);
            i++;
        }while(i<10);
    }
}
