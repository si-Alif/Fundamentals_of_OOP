class Person{
  void message (){
    System.out.println("Hello");
  }
}

class Employee extends Person{
  int id ;
  Employee(int id){
    this.id = id; // an instance of Employee would be created by passing the value of id , meanwhile this.id would be assigned the value of id
  }

  Employee updateId(int id){ // as we're going to return the updated object state of Employee type via 'this' keyword

    this.id = id; // here this ensures that "Hey , I'm trying to update the value of my 'id' variable"
    return this; //

  }

  void message (){ // overriding the message method of the parent class . Since it's overridden , this would have more priority if invoked via Employee instances
    super.message(); // this will call the message method of the parent class . This is where super shines , to get to the OG
    System.out.println("Hello Employee . Your id is " + id);
  }
}

public class This{
  public static void main(String[] args) {
    Employee e1 = new Employee(1);
    e1.message();
    e1.updateId(1000).message(); // as we have returned "this"(means the object itself in that state) from message , we can now do method chaining
  }
}
