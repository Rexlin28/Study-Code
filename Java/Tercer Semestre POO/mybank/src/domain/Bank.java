package domain;


public class Bank {
    private static Customer customers;
    //private static int numberOfCustomers;
    
    static{
        customers = new Customer[10];
        numberOfCustomers = 0;
    }
    
    private Bank(){
        customers = new Customer[10];
        numberOfCustomers = 0;
    }
    public static void addCustomer(String firstName, String lastName){
        //Exception Array Capacity overflow
        customers[numberOfCustomers] = new Customer(firstName, lastName);
        numberOfCustomers++;
    }
    public static int getNumOfCustomers(){
        return numberOfCustomers;
    }
    public static Customer getCustomer(int i){
        return customers[i];
    }
}
