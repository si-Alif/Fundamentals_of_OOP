// import java.util.*;
// import java.io.*;

class Employee{
  int id;
  String name;
  int age ;
  double salary;

  Employee(){
    id = 0;
    name = "Unknown";
    age = 18;
    salary = 0;
  }

  Employee(int _id , String _name  , int _age , double _salary ){
    id = _id;
    name = _name;
    age = _age;
    salary = _salary;
  }

  void getInfo(){
    System.out.println("The Following Employee Related Info :");
    System.out.println("ID :" + id);
    System.out.println("Name :" + name);
    System.out.println("Age :"  + age);
    System.out.println("Salary :" + salary);
  }

  void updateSalary(double increment){
    salary = increment;
    System.out.println("Employee ID : " + id + "'s new salary" + salary );
  }

}

public class Constructor{ // as this contains the main method , this is referred as driver class
  public static void main(String[] args){
    Employee e1 = new Employee();
    e1.getInfo();

    Employee e2 = new Employee(3, "Zayed", 69, .00001);
    e2.getInfo();
    e2.updateSalary(.000001);
    e2.getInfo();

  }
}