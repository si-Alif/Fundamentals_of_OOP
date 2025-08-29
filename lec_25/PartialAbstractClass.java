package lec_25;

abstract class Shape {
  private String color;
  private String shape;
  public Shape(String shape ,String color) {
    this.color = color;
    this.shape = shape;
  }
  abstract void calculateArea();
  void displayColor() { // non-abstract method of the abstract class
    System.out.println("Color : " + color);
  }
}

class Circle extends Shape{
  private double radius;
  public Circle(String shape , String color , double radius) {
    super(shape , color);
    this.radius = radius;
  }
  void calculateArea() {
    System.out.println("Area of the following circle : " + Math.PI * radius * radius);
  }

}

public class PartialAbstractClass {
  public static void main(String[] args) {
    Shape s1 = new Circle("Circle", "Red" , 27);
    s1.displayColor();
    s1.calculateArea();
  }
}