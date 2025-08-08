// package lec_13;

class Person{
  String name;
  int age ;
  int id;
  Person(String name , int age , int id){
    this.name = name;
    this.age = age;
    this.id = id;
  }

  Person updateInfo(String name , int age , int id){
    if(!name.isEmpty()) this.name = name;
    if(age >0 ) this.age = age;
    if(id > 0 ) this.id = id;
    return this;
  }

}

class Student extends Person{
  float cg ;
  String dept;
  Student(String name , int age , int id , float cg , String dept){
    super(name, age, id);
    this.cg = cg;
    this.dept = dept;
  }

  Student updateInfo(float cg , String dept , int age , int id , String name){
    super.updateInfo(dept, age, id);
    if(cg != 0) this.cg = cg;
    if(!dept.isEmpty()) this.dept = dept;
    return this;
  }

};

class Grad_student extends Student{
  String thesis;
  Grad_student(String name , int age , int id , float cg , String dept , String thesis){
    super(name, age, id, cg, dept);
    this.thesis = thesis;
  }

  void displayInfo(){
    System.out.println("The Following Student Related Info :");
    System.out.println("ID :" + id);
    System.out.println("Name :" + name);
    System.out.println("Age :"  + age);
    System.out.println("CGPA :" + cg);
    System.out.println("Department :" + dept);
    System.out.println("Thesis :" + thesis);
  }

  Grad_student update_info(String name , int age , int id , float cg , String dept , String thesis){
    super.updateInfo(cg, dept, age, id, name);
    if(!thesis.isEmpty()) this.thesis = thesis;
    return this;
  }

}

class Teacher extends Person{
  String dept , sub;
  Teacher(String name , String sub , String dept, float cg , int id , int age){
    super(name, age, id);
    this.sub = sub;
    this.dept = dept;
  }

  public Teacher updateInfo(String dept, String sub , int age , int id , String name){
    super.updateInfo(name, age, id);
    if(!sub.isEmpty()) this.sub = sub;
    if(!dept.isEmpty()) this.dept = dept;
    return this;
  }

  void displayInfo(){
    System.out.println("The Following Teacher Related Info :");
    System.out.println("ID :" + id);
    System.out.println("Name :" + name);
    System.out.println("Age :"  + age);
    System.out.println("Subject :" + sub);
    System.out.println("Department :" + dept);
  }

}

public class Uni_system{
  public static void main(String[] args) {
    Grad_student gg = new Grad_student("Rizzler" ,  20,  2  , 4.0f  , "Computer Science" , "AI" );
    gg.displayInfo();
    gg.update_info("" , 0 , 0   , 0  , "" , "Quantum Computing").displayInfo();

    Teacher t1 = new Teacher("Zayed", "Mathematics" , "Computer Science" , 4.0f , 1 , 21);
    t1.displayInfo();
    t1.updateInfo("", "",0 , 0, "Zayed Khan").displayInfo();
  }
}