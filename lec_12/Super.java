class Vehicle {
  Vehicle() {
    System.out.println("Vehicle is moving");
  }
}

class Car extends Vehicle {
  // Car(){
  //   super(); // even if you don't add something like this , the compiler will automatically add it by default during compilation
  // }
  public void move() {
    System.out.println("Car is moving");
  }
}

public class Super{
  public static void main(String[] args) {
    Car myCar = new Car();
    myCar.move();
  }
}