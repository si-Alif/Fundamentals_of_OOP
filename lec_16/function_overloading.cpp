#include <bits/stdc++.h>
using namespace std;

// same name but different parameters ,
double area(double radius){
  return 3.14 * radius * radius;
}

double area(double length , double breadth){
  return length * breadth;
}

double area(double length , float breadth){
  return length * breadth;
}
// double area(double length , float breadth){ --->⭐⭐⭐ error cz functions can't be overridden based on return type alone 
//   return length * breadth;
// }

double area(double length , double breadth , bool isTriangle){
  return .5 * length * breadth ;
}


int main(void){

  cout << "Area of a circle : " << area(10) << endl;
  cout << "Area of a rectangle : " << area(10 , 20.0) << endl; // calls area(double length , double breadth)
  cout << "Area of a rectangle : " << area(10 , (float)20.0) << endl; // calls area(double length , float breadth)
  cout << "Area of a cuboid : " << area(10 , 20 , true) << endl;

return 0;
}