package domain;

public class AccumulateSavingsBatch {
    private Bank bank;
    
    public void doBatch(){
        if(bank.getNumOfCustomers()!=0){
            for(int i=0; i<bank.getNumOfCustomers(); i++){
                Customer customer = bank.getCustomer(i);
                if(customer.getNumOfAccounts()!=0){
                    for(int j=0; j<customer.getNumOfAccounts(); j++){
                        if(customer.getAccount(j).getClass() == SavingsAccount.class ){
                            SavingsAccount account = (SavingsAccount)customer.getAccount(j);
                            account.accumulateInterest();
                            customer.switchAccounts(account, j);
                        }
                    }
                }
            }
        }else{
            System.out.println("No Clients Registered in this Bank");
        }
    }
    public void setBank(Bank bank){
        this.bank = bank;
    }
}
