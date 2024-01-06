package test;

import domain.Account;


public class TestAccount {

    public static void main(String[] args) {
        Account cuenta = new Account(100);
        cuenta.deposit(50);
        System.out.println(cuenta.getBalance());
        System.out.println("**************");
        cuenta.withdraw(147);
        System.out.println(cuenta.getBalance());
        
    }
    
}
