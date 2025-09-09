class AgeException extends Exception{
  public AgeException(String msg){
    super(msg);
  }
}

class MarksException extends Exception{
  public MarksException(String msg){
    super(msg);
  }
}


class StudentEligibilityCheck{
  public String name;
  public int age;
  public int marks;

  public StudentEligibilityCheck(String name, int age, int marks) throws AgeException , MarksException{
    this.name = name;
    this.setAge(age);
    this.setMarks(marks);
  }

  void setAge(int age) throws AgeException{
    if(age < 18){
      throw new AgeException(this.name + " isn't eligible for admission . Age should be greater than 18");
    }
    else this.age = age;
  }

  void setMarks(int marks) throws MarksException{
    if(marks < 60){
      throw new MarksException(this.name + " isn't eligible for admission . Marks should be greater than 60");
    }
    else this.marks = marks;
  }

}


public class StudentAdmission{
  public static void main(String[] args) {
    try{
      StudentEligibilityCheck s = new StudentEligibilityCheck("Alif", 21, 33);
      System.out.println(s.name + " is eligible for admission");
    }
    catch(AgeException e){
      System.out.println(e.getMessage());

    }
    catch(MarksException e){
      System.out.println(e.getMessage());
    }

    try{
      StudentEligibilityCheck s = new StudentEligibilityCheck("puff diddy", 21, 63);
      System.out.println(s.name + " is eligible for admission");
    }
    catch(AgeException e){
      System.out.println(e.getMessage());

    }
    catch(MarksException e){
      System.out.println(e.getMessage());
    }

    
  }
}