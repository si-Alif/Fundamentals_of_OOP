class Perimeter{
  int len , breadth;
  Perimeter(){
    len = 0;
    breadth = 0;
  }

  Perimeter(int _len , int _breadth){
    len = _len;
    breadth = _breadth;
  }

  void calc_Perimeter(){
    System.out.println("Perimeter : " + 2*(len + breadth));
  }
}


public class Default_and_parameterized_cons {
  public static void main(String[] args) {
    Perimeter p1 = new Perimeter(10 , 20); // parameterized constructor
    p1.calc_Perimeter();

    Perimeter p2 = new Perimeter(); // default constructor
    p2.calc_Perimeter();

  }
}