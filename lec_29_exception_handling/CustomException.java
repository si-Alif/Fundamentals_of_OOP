class InvalidMarksException extends Exception{
  public InvalidMarksException(String msg){
    super(msg);
  }
}


class Student{
  public double num;
  public Student(double num) throws InvalidMarksException {
    if (num > 100 || num < 0) throw new InvalidMarksException("Marks must be between 0 to 100");
    this.num = num;
  }

  double getMarks() {
    return this.num;
  }

}


public class CustomException{
  public static void main(String[] args) throws InvalidMarksException{
    try{
      Student s = new Student(101);
      System.out.println(s.getMarks());
    }
    catch(InvalidMarksException e){
      System.out.println(e.getMessage());
    }

    System.out.println("Rest of the code...");

  }
}