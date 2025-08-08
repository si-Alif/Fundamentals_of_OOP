#include <bits/stdc++.h>
using namespace std;

// ⭐⭐⭐ Remember this ::: In inheritance the base class's structure(all the attributes and functions are provided to the derived class , later it's decided based on the specifier if the attributes and functions are accessible or not by the derived class) is only shared with the derived class not the state of those attributes in the base class

class Line{
  public :
    double len = 69;
    void setLen(double len);
    double getLen(void){
      return len;
    }
};

void Line::setLen(double _len){
  len = _len;
}

// int Line::len = 911; --> this is an error 

class Box{
  public :
    double len = 69;
    void setWidth(double _width);
    double getWidth(void);
  private :
    double width;
  protected:
    double area;

};

void Box::setWidth(double _width){
  width = _width;
}

double Box::getWidth(void){
  return width;
}

class SmallBox :public Box {
  public:

};

class SmallerBox : public SmallBox{
  public :
  void calcArea(void);
  SmallerBox(){
    cout << len << "\n"; //--> ⭐⭐⭐1️⃣this will give garbage value as base class only shares the attributes of it not "the state of those attributes"
  }
};

void SmallerBox::calcArea(){
  // cout<<"Area is :" << len * getWidth()<<"\n";
}

int main(void){

  Line straightLine;
  straightLine.len = 10; // as len is public member data
  cout<<straightLine.getLen() << "\n";
  straightLine.setLen(20.89);
  cout<<straightLine.len<<"\n";

  Box b1;
  b1.len = 10;
  // b1.width = 10.99;--> error : as width is private
  b1.setWidth(10.99);
  cout<<b1.getWidth()<<"\n";
  // SmallBox s1;
  SmallerBox sm1;
  sm1.len = 10;
  sm1.setWidth(10.99);
  cout<<sm1.len<<"\n"; // -->⭐⭐⭐2️⃣as attributes value is assigned this will now work properly
  sm1.setWidth(10.99);
  sm1.calcArea();

return 0;
}