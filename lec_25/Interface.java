package lec_25;

interface printable{
  void print();
}

class A6 implements printable{
  public void print(){
    System.out.println("Implementing Interface in class A6");
  }
}

public class Interface {
  public static void main(String[] args) {
    A6 a6 = new A6();
    a6.print();
  }
}
