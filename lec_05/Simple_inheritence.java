class Vehicle{
  String brand;
  void showBrand(){
    System.out.println("Brand :" + brand);
  }
}

class Car extends Vehicle{
  String model;
  void showModel(){
    System.out.println("Model : " + model);
  }
}

public class Simple_inheritence {
  public static void main(String[] args) {
    Car myCar = new Car();
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.showBrand();
    myCar.showModel();
  }
}