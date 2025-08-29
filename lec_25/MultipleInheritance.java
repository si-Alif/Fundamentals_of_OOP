package lec_25;

interface Printable{
  void print();
}

interface Showable{
  void show();
}

class A7 implements Printable, Showable{
  public void print(){
    System.out.println("Implementing Interface in class A7 following the interface Printable");
  }
  public void show(){
    System.out.println("Implementing Interface in class A7 following the interface Showable");
  }
}

public class MultipleInheritance{
  public static void main(String[] args) {
    A7 a7 = new A7();
    a7.print();
    a7.show();
  }
}