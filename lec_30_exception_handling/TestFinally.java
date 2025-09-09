import java.util.InputMismatchException;
import java.util.Scanner;

public class TestFinally{
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    try{
      int num1 , num2 , result = 0;
      System.out.println("Enter first number : ");
      num1 = scanner.nextInt();
      System.out.println("Enter second number : ");
      num2 = scanner.nextInt();
      result = num1/num2;
      System.out.println("Quotient : " + result);

    }
    catch(ArithmeticException e){
      System.out.println(e.getMessage());
    }
    catch(InputMismatchException e){
      System.out.println(e.getMessage());
    }
    finally{
      System.out.println("Wrapped up division try-catch block...");
      scanner.close();
    }


    try{
      int[] a = new int[5];
      a[2] = 10;
      System.err.println(a[2]);
    }
    catch(ArrayIndexOutOfBoundsException e){
      System.out.println(e);
    }
    finally{
      System.out.println("Wrapped up array try-catch block...");
    }
  }
}