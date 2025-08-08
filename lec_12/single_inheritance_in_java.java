
class Calculation{
  Calculation(){
    System.out.println("Calculation class was called . Might have been done by My_Calculation subclass");
  }
  Calculation(int val){
    System.out.println("Calculation class was called . Might have been done by My_Calculation subclass with value : " +val );
  }
  int res;
  public void summation(int x , int y){
    res = x+y;
    System.out.println("Summation : " + res);
  }
  public void multiplication(int x , int y){
    res = x*y;
    System.out.println("Multiplication : " + res);
  }
}

class My_calculation extends Calculation{
  My_calculation(){
    super(10);
  }
  public void subtraction(int x, int y){
    res = x-y;
    System.out.println("Subtraction : " + res);
  }
}

public class single_inheritance_in_java {
  public static void main(String[] args) {
    My_calculation calc = new My_calculation();
    calc.summation(10 , 20);
    calc.multiplication(10 , 20);
    calc.subtraction(10 , 20);
  }
}

