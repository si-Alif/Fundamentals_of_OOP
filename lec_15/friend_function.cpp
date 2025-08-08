#include <bits/stdc++.h>
using namespace std;

class Box{
  private :
    double length;
    double breadth;
    double height;

  public :
    Box() : length(0) , breadth(0) , height(0) {};

    friend double calculateVolume(Box , double , double , double); // argument is a reference of type Box , needed to be specified , unless early binding error
};

double calculateVolume(Box b , double _height , double _breadth , double _length){
  b.length = _length;
  b.breadth = _breadth;
  b.height = _height;
  return b.length * b.breadth * b.height;
}



int main(void){

  Box b;

  cout << "Volume : " << calculateVolume(b , 10.3 , 34.2 , 56.89) << endl;

return 0;
}