package lec_24;

// In java , abstract classes can have both abstract methods and non abstract methods
// making java abstract class partially abstract
// Meanwhile , if you use interface then it's 100% abstract

abstract class Bike {
  abstract void run();
}

class Enfield extends Bike {
  void run(){
    System.out.println("Enfield Running safely...");
  }
}

public class AbstractClass{
  public static void main(String args[]){
    Bike e = new Enfield();
    e.run();
  }
}
