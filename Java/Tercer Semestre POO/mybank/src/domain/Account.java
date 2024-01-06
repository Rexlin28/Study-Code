package domain;


public class Account extends OverdraftException {
    protected double balance;
    //private int id;
    
    protected Account(double balance){
        this.balance = balance;
    }
    
    public double getBalance(){
       return balance; 
    }
    public void deposit(double quantity){
            //Exception Overflow;
            this.balance += quantity;
    }
    public void withdraw(double quantity){
        if(balance>=quantity){
            this.balance -= quantity;
        }else{
            try{
                throw new OverdraftException("Insufficient funds ", quantity - balance);
            }
            catch(OverdraftException exc){
                System.out.println(exc);
            }
        }
        
    }
}
