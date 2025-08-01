public class Driver_class {
  Driver_class(){
    System.out.println("Driver class was called");
  }

  public static void main(String[] args) {
    Driver_class d1 = new Driver_class();
    System.out.println(d1); // prints the "identity hashmap" address of the object stored in heap memory

    Driver_class d2; // d2 is an uninitialized variable that is supposed to store the identity hashmap of a object of Driver_class
    // System.out.println(d2); // this gives compilation error as d2 isn't initialized

    d2 = null; // this can solve the issue , as the d2 object is now pointing towards nothing
    System.out.println(d2); // --> null

    d2 = new Driver_class();
    System.out.println(d2); // --> prints the "identity hashmap" address of the object stored in heap memory

    // N.B. --> that a class's constructor can only be called when it's instanciated object is stored in the memory . So don't expect that just because you've declared a variable with the same datatype as the class you can call it's constructor .

    

  }
}


