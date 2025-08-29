// 4 access specifiers available in java :
    // 1. public
    // 2. private
    // 3. protected
    // 4. default

class Bike{
  protected int speedLimit = 80;
}

public class Car extends Bike{
  public static void main(String[] args) {
    Bike obj = new Car();
    System.out.println(obj.speedLimit); // can access cz this is inside the inherited class , not an instance of the derived class
  }
}