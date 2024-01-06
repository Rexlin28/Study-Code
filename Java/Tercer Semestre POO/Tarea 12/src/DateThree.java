
public class DateThree {
    private int day;
    private int month;
    private int year;
    
    public void inputDay(int dia){
        day = dia;
    }
    
    public void inputMonth(int mes){
        month = mes;
    }
    
    public void inputYear(int anio){
        year = anio;
    }
    
    public int outputDay(){
        return day;
    }
    
    public int outputMonth(){
        return month;
    }
    
    public int outputYear(){
        return year;
    }
    
    public int calcDaysInMounth(){
        switch(month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
               return 31;

            case 2:
            return 28;
            case 4:
            case 6:
            case 9:
            case 11:
               return 30;

            default:
               System.out.println("Invalid month.");
               return 0;
        }
    }
    public void displayDate(){
            System.out.println(day+"/"+month+"/"+year);
    }
}
