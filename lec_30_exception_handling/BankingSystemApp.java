import java.util.InputMismatchException;

class InsufficientBalance extends Exception{
  public InsufficientBalance(String msg){
    super(msg);
  }
}

class InvalidDepositAmount extends Exception{
  public InvalidDepositAmount(String msg){
    super(msg);
  }
}


class BankingSystem{
  String name;
  int id;
  double balance;

  public BankingSystem(int id , double balance , String name ) throws InvalidDepositAmount{
    if(balance < 0) throw new InvalidDepositAmount("Invalid Initial Balance . Balance must be greater than 0") ;
    this.id = id ;
    this.balance = balance ;
    this.name = name ;
  }

  public void deposit(double amount) throws InvalidDepositAmount{
    if(amount < 0) throw new InvalidDepositAmount("Invalid Deposit Amount . Amount must be greater than 0") ;
    this.balance += amount ;
  }

  public void withdraw(double amount) throws InsufficientBalance{
    if(amount < 0) throw new InsufficientBalance("Invalid Withdrawal Amount . Amount must be greater than 0") ;
    if(amount > this.balance) throw new InsufficientBalance("Insufficient Balance . Your current balance is : " + this.balance) ;
    this.balance -= amount ;
  }

  public void displayAccountBalance(){
    System.out.println("Account Holder Name : " + name);
    System.out.println("Account Balance : " + balance);
  }

  public double getBalance(){
    return this.balance ;
  }

}

public class BankingSystemApp{
  public static void main(String[] args) throws InsufficientBalance, InvalidDepositAmount{
    try{
      BankingSystem obj = new BankingSystem(1 , 1000 , "Sachin") ;
      try{
        obj.deposit(2000);
      }
      catch(InvalidDepositAmount e){
        System.out.println(e.getMessage());
      }
      finally{
        System.out.println("Transaction Completed . Your current balance is : " + obj.getBalance());
      }

      try{
        obj.withdraw(5000);
      }
      catch(InsufficientBalance e){
        System.out.println(e.getMessage());
      }
      finally{
        System.out.println("Transaction Completed . Your current balance is : " + obj.getBalance());
      }
    }
    catch(InvalidDepositAmount e){
      System.out.println(e.getMessage());
    }
  }
}