

public class DateThreeTest {
    public static void main(String[] args) {
       DateThree cumple= new DateThree();
       cumple.inputDay(25);
       cumple.inputMonth(10);
       cumple.inputYear(2020);
       System.out.println(cumple.outputDay()+"/"+cumple.outputMonth()+"/"+cumple.outputYear());
       cumple.displayDate();
       System.out.println("Dias en Octubre: "+ cumple.calcDaysInMounth() );
    }  
    
}
