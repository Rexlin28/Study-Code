package domain;

public class CustomerReport{
    static Bank bank;
    
    public void generateReport(){
        if(bank.getNumOfCustomers()!=0){
            for(int i=0; i<bank.getNumOfCustomers(); i++){
                Customer customer = bank.getCustomer(i);
                System.out.println(customer.getLastName()+", "+bank.getCustomer(i).getLastName());
                System.out.println("Number of Accounts: "+customer.getNumOfAccounts());
                if(customer.getNumOfAccounts()!=0){
                    for(int j=0; j<customer.getNumOfAccounts(); j++){
                        System.out.println("Accout["+(j+1)+"]: $"+ customer.getAccount(j).getBalance());
                    }
                }
                System.out.println("*****************************************");
            }
        }else{
            System.out.println("No Clients Registered in this Bank");
        }
    }/*
    public void setBank(Bank bank){
        this.bank = bank;
    }*/
}
