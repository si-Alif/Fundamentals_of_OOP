#include <bits/stdc++.h>
using namespace std;

class GeometryCalculator{
  public:
    static double rectangleArea(double width , double length){
      return width * length ;
    }
    static double rectanglePerimeter(double width , double length){
      return 2*(width + length) ;
    }
    static double circleArea(double radius){
      return M_PI * radius * radius ;
    }
    static double circleCircumference(double radius){
      return 2 * M_PI * radius ;
    }
    static double triangleArea(double a , double b , double c){
      double s = (a+b+c) /2.0;
      return sqrt(s* (s-a) * (s-b) * (s-c));
    }

};

int main(void){

  double width = 10 ;
  double length = 20 ;
  double radius = 55 ;
  double sideA = 23 ;
  double sideB = 47 ;
  double sideC = 36 ;

  GeometryCalculator g1;

  cout << "Ractangle Area :" << g1.rectangleArea(width  , length)<<endl;
  cout << "Ractangle Area :" << g1.circleCircumference(radius)<<endl;

return 0;
}