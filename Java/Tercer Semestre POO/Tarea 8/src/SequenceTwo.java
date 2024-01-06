
public class SequenceTwo {
    public void displaySequence(){
        int number=1;
        int numberBefore=0;
        int numberAfter=0;
        for(int i=0; i<10; i++){
            number+=numberBefore;
            numberBefore=numberAfter;
            numberAfter=number;
            System.out.println(number);
        }
    }
}
