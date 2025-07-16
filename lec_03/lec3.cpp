#include <bits/stdc++.h>
using namespace std;

class Rectangle{
  int width , length;
  public:
    void insert(int a , int b){
      length = a;
      width = b;
    }
    int area(){
      return width * length;
    }
    int perimeter(){
      return 2*(width + length);
    }

};

int main(void){

  Rectangle r1;
  r1.insert(10 , 20);

  cout<<"Area :" << r1.area()<<endl;
  cout<<"Perimeter :" << r1.perimeter()<<endl;

return 0;
}