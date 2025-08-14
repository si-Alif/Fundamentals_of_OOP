class Grade_eval{
  private String name ;
  public Grade_eval(String name){
    this.name = name ;
  }

  public void printGrade(char grade){
    switch(grade){
      case 'A' :
        System.out.println(name + " got A grade");
        break;
      case 'B':
        System.out.println(name + " got B grade");
        break;
      case 'C':
        System.out.println(name + " got C grade");
        break;
      case 'D':
        System.out.println(name + " got D grade");
        break;
      default:
        System.out.println(name + " got N grade");
    }
  }

    public void printGrade(double percentage){
      if(percentage>=90){
        System.out.println(name + " got A grade");
      }
      else if(percentage>=80){
        System.out.println(name + " got B grade");
      }
      else if(percentage>=70){
        System.out.println(name + " got C grade");
      }
      else if(percentage>=60){
        System.out.println(name + " got D grade");
      }
      else{
        System.out.println(name + " got N grade");
      }
    }

    public void printGrade(float gpa){
      if(gpa>=3.8){
        System.out.println(name + " got A grade");
      }
      else if(gpa>=3.5){
        System.out.println(name + " got B grade");
      }
      else if(gpa>=3.0){
        System.out.println(name + " got C grade");
      }
      else if(gpa>=2.5){
        System.out.println(name + " got D grade");
      }
      else{
        System.out.println(name + " got F grade");
      }
    }

}


public class grading_system{
  public static void main(String args[]){
    Grade_eval g1 = new Grade_eval("puff diddy");
    g1.printGrade('N');
    g1.printGrade(33.00);
    g1.printGrade(3.8f);
  }
}