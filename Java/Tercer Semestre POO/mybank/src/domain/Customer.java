
package domain;

public class Customer {
    private String firstName;
    private String lastName;
    private Account [] accounts;
    
    
    public Customer(String firstName, String lastName){
        this.firstName = firstName;
        this.lastName = lastName;
        accounts = new Account[10]; 
       
    }
    public String getFirstName(){
        return firstName;
    }
    public String getLastName(){
        return lastName;
    }
    public Account getAccount(int i){
        return accounts[i];
    }
    public void addAccount(Account accounts){
        this.accounts[numberOfAccounts] = accounts;
        this.numberOfAccounts++;
    }/*
    public void addAccount(SavingsAccount accounts){
        this.accounts[numberOfAccounts] = accounts;
        this.numberOfAccounts++;
    }
    public void addAccount(CheckingAccount accounts){
        this.accounts[numberOfAccounts] = accounts;
        this.numberOfAccounts++;
    }*/
    public void switchAccounts(Account accounts, int i){
        this.accounts[i]= accounts;
    }
    public int getNumOfAccounts(){
        return numberOfAccounts;
    }
}
