
public class VacationScale {
    int vacation [] =new int[7];
    public void setVacationScale(){
        vacation[0]=10;
        vacation[1]=15;
        vacation[2]=15;
        vacation[3]=15;
        vacation[4]=20;
        vacation[5]=20;
        vacation[6]=25;
    }
    public void displayVacationDays(int yearsOfService){
        int years;
        if(yearsOfService>=0){
            if(yearsOfService>=6){
                years=vacation[6];
            }else{
                years=vacation[yearsOfService];
            }
            System.out.println("Vacation Days: "+years);
        }else{
            System.out.println("Invalid Number");
        }
    }
}
