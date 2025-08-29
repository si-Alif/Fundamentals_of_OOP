
class Bank_Account{
  private String accountHolderName;
  private double balance ;
  private int accountNumber;

  public Bank_Account(){
    this.accountHolderName = "Unknown";
    this.balance = 0.0;
    this.accountNumber = 0;
  }

  public Bank_Account(String accountHolderName , double balance , int accountNumber ){
    this.accountHolderName = accountHolderName;
    setBalance(balance);
    this.accountNumber = accountNumber;
  }

  public void setAccountHolderName(String accountHolderName){
    this.accountHolderName = accountHolderName;
  }
  public String getAccountHolderName() {
    return this.accountHolderName;
  }

  public void setBalance(double balance){
    if (balance >= 0) this.balance = balance;
    else System.out.println("Invalid Balance");
  }
  public double getBalance(){
    return this.balance;
  }

  public void deposit(double amount){
    if(amount > 0){
      this.balance += amount;
      System.out.println("Amount Deposited :" + amount + " Successfully ...");
    }
    else System.out.println("Invalid Amount");

  }

  public void withdraw(double amount){
    if(amount > 0 && amount <= this.balance){
      this.balance -= amount;
      System.out.println("Amount Withdrawn :" + amount + " Successfully ...");
    }
    else if (amount > this.balance) System.out.println("Insufficient Balance . Your current balance is : " + this.balance);
    else System.out.println("Invalid Amount");
  }

  public void setAccountNumber(int accountNumber){
    this.accountNumber = accountNumber;
  }
  public int getAccountNumber(){
    return this.accountNumber;
  }

  public void displayAccountInfo(){
    System.out.println("Account Holder Name : " + this.accountHolderName);
    System.out.println("Account Balance : " + this.balance);
    System.out.println("Account Number : " + this.accountNumber);
  }

}


public class Bank_management_system {
  public static void main(String[] args) {
    Bank_Account b1 = new Bank_Account("Puff Diddy" , 1000 , 1234567890);
    b1.displayAccountInfo();
    b1.deposit(1000);
    b1.displayAccountInfo();
    b1.withdraw(2000);
    b1.displayAccountInfo();

    Bank_Account b2 = new Bank_Account();
    b2.setAccountHolderName("Kanye West");
    b2.setBalance(2000);
    b2.setAccountNumber(987654321);
    b2.displayAccountInfo();
    b2.deposit(200);
    b2.withdraw(3400);
    b2.displayAccountInfo();
  }
}