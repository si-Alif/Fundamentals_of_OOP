import java.math.*;

class Shape{
  public String color ;
  public Shape(String color){
    this.color = color;
  }
  public void displayColor(){
    System.out.println("Color : " + color);
  }

  public void setColor(String color){
    this.color = color;
  }

  public String getColor(){
    return this.color;
  }

  //to be overridden
  public double calculateArea(){
    return 0.0;
  }

}

class Circle extends Shape{
  double radius ;
  public Circle(String color , double radius){
    super(color);
    this.radius = radius;
  }


  //overridden calculateArea method of base class
  @Override
  public double calculateArea(){
    return radius * Math.PI * radius;
  }

}

class Rectangle extends Shape{
  double length;
  double breadth;
  public Rectangle(String color , double length , double breadth){
    super(color);
    this.length = length;
    this.breadth = breadth;
  }

  @Override
  public double calculateArea(){
    return length * breadth;
  }
}


public class hierarchical_inheritance{
  public static void main(String[] args) {
    Circle c1 = new Circle("Magenta", 23);
    c1.displayColor();
    System.out.println("Area of the following circle : " + c1.calculateArea());
    c1.setColor("purple");
    c1.displayColor();

    Rectangle r1 = new Rectangle("Red" , 3 , 4);
    r1.displayColor();
    System.out.println("Area of the following rectangle : " + r1.calculateArea());
  }
}

