// import java.util.*;
// import java.lang.*;
// import java.io.*;

//Car class
class Car{
  String brand ; // data member or Attribute
  int year ;

  void displayInfo(){ // defined method
    System.out.println("Car Brand :" + brand);
    System.out.println("Year :" + year);
  }
}

public class Intro{
  public static void main(String args[]){
    //generating new Car class instance
    Car c1 = new Car(); // Instance(contigious datatype elements are generated in the dynamic heap memory)
    c1.brand = "Toyota";
    c1.year = 2025;

    c1.displayInfo();

  }
}

