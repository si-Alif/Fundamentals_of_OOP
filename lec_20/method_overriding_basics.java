class A{
  public void methodA(){
    System.out.println("Method A from class A");
  }
}

class B extends A{
  public void methodA(){
    System.out.println("Method A from class B");
  }

  public void methodB(){
    System.out.println("Method B from class B");
  }

}


public class method_overriding_basics{
  public static void main(String[] args) {
    // B objA = new A(); --> this will throw an compilation error cz B is a subtype of A not A a subtype of B . Thus A's object can't be referred by B
    A objA = new A();
    A objB = new B(); // --> cz B is A that's why A can be used as a reference to the object of B
    objA.methodA();
    objB.methodA();
    // objB.methodB(); --> Compile time error as the compiler couldn't find methodB() in class A which was the reference type
  }
}