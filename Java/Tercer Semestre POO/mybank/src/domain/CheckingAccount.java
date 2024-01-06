
package domain;

public class CheckingAccount extends Account{
    private double overdraftAmount;
    
    public CheckingAccount(double initBalance, double overdraft){
        super(initBalance);
        this.overdraftAmount = overdraft;
    }
    public CheckingAccount(double initBalance){
        this(initBalance, 0);
    }
    
    public void withdraw(double amount){
        boolean result = true;
        
        if(amount> balance){
           double overdraftNeeded = amount - balance;
           if(overdraftNeeded > overdraftAmount){
               throw new OverdraftException("No overdraft protection",overdraftNeeded);
           }else{
               this.overdraftAmount -= overdraftNeeded;
               balance = 0;
           }
        }else{
            balance -= amount;
        }
    }
}
