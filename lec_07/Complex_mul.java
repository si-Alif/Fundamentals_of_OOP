import java.util.*;
import java.io.*;

class Complex_Number{
  double real;
  double img;

  void setValue(double _real , double _img){
    real = _real;
    img = _img;
  }

  static Complex_Number Multiplication(Complex_Number c1 , Complex_Number c2){
    Complex_Number res = new Complex_Number();
    res.real = (c1.real * c2.real) - (c1.img * c2.img);
    res.img = (c1.real * c2.img) + (c1.img * c2.real);

    return res;
  }

  void displayRes(){
    System.out.println("Result : " + real + (img < 0 ? "" : "+") + img + "i");
  }

}

public class Complex_mul{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    Complex_Number c1 = new Complex_Number();
    Complex_Number c2 = new Complex_Number();

    System.out.println("Insert Real and Imaginary part of the complex numbers one by one :");

    double real1 = sc.nextDouble();
    double img1 = sc.nextDouble();

    double real2 = sc.nextDouble();
    double img2 = sc.nextDouble();

    c1.setValue(real1, img1);
    c2.setValue(real2 , img2);

    Complex_Number result = Complex_Number.Multiplication(c1, c2);

    System.out.println("Result of multiplication :");
    result.displayRes();

    sc.close();
    
  }
}


