

class Animal{
  private String name;
  private int age ;

  public void setName(String name){
    this.name = name;
  }

  public void setAge(int age){
    this.age = age;
  }

  public String getName(){
    return this.name;
  }

  public int getAge(){
    return this.age;
  }

}


public  class Encapsulation{
  public static void main(String[] args) {
    Animal a = new Animal();
    a.setName("Dog");
    a.setAge(2);
    System.out.println(a.getName());
    System.out.println(a.getAge());
  }
}
