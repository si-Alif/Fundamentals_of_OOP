import java.util.*;
// package lec_19;
// Overloading is you've multiple functions/methods(in a class) with the same name . But you can define them based on your need in multiple forms .
// The only constraint in overloading is "you can't overload a function based on the return type alone"

class Test{

  void add(int a , int b , int c){
    System.out.println(a + b + c);
  }
  int  add(int a , int b){
    return a + b;
  }
  // double add(int a  , int b){ // ⭐⭐⭐ This will throw an error
  //   return a + b;
  // }
  double add(int a , double b ){
    return a + b;
  }

  int max (int a  , int b){
    return a > b ? a : b;
  }

  int max(int a , int b , int c){
    return a>b && a>c ? a : b>c ? b : c;
  }
}

public class method_overloading {
  public static void main(String[] args) {
    Test t = new Test();
    t.add(10 , 20 , 30);
    System.out.println(t.add(10 , 20));
    System.out.println(t.add(10 , 20.0));

    System.out.println(t.max(10 , 20));
    System.out.println(t.max(10 , 20 , 30));
  }
}
