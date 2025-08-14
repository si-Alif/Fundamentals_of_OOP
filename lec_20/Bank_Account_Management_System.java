class BankAccount{
  protected String AccountHolderName;
  protected double Balance;
  public BankAccount(String AccountHolderName , double Balance){
    this.AccountHolderName = AccountHolderName;
    this.Balance = Balance;
  }

  public void displayAccountBalance(){
    System.out.println("Account Holder Name : " + AccountHolderName + "\nAccount Balance : " + Balance);
  }

  public void calculateInterest(){
    System.out.println("Interest Calc for a generic bank account");
  }

  public void applyServiceCharges(){
    System.out.println("Apply Service Charges for a generic bank account");
  }

}

class SavingsAccount extends BankAccount{
  private double interestRate;
  public SavingsAccount(String AccountHolderName , double Balance , double interestRate){
    super(AccountHolderName , Balance);
    this.interestRate = interestRate;
  }

  @Override
  public void calculateInterest(){
    this.Balance = this.Balance + (this.Balance * (this.interestRate / 100));

    System.out.println("Interest calculation is done and the interest is added to the account balance ");
    System.out.println("Account Holder Name : " + AccountHolderName + "\nAccount Balance : " + Balance);
  }

  @Override
  public void applyServiceCharges(){
    System.out.println("Service Charges aren't applied to Savings Account");
  }
}

class CurrentAccount extends BankAccount{
  private double serviceCharges;
  public CurrentAccount(String AccountHolderName , double Balance , double serviceCharges){
    super(AccountHolderName , Balance);
    this.serviceCharges = serviceCharges;
  }

  @Override
  public void calculateInterest(){
    System.out.println("No interest is applicable for Current Account");
  }

  @Override
  public void applyServiceCharges(){
    this.Balance = this.Balance - this.serviceCharges;
    System.out.println("Service Charges are applied to Current Account and the account balance is updated");
    System.out.println("Account Holder Name : " + AccountHolderName + "\nAccount Balance : " + Balance);
  }
}


public class Bank_Account_Management_System{
  public static void main(String[] args) {
    BankAccount b1 = new SavingsAccount("Ashton Hall", -1000, -.5);
    b1.displayAccountBalance();
    b1.calculateInterest();
    b1.applyServiceCharges();

    BankAccount b2 = new CurrentAccount("Ashton Hall", 1060, 1000000);
    b2.displayAccountBalance();
    b2.calculateInterest();
    b2.applyServiceCharges();
  }
}