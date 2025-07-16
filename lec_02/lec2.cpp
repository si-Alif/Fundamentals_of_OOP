#include <bits/stdc++.h>
using namespace std;

class Box{
  public:
    double length;
    double breadth;
    double height;
};

class Student{
  public :
    int id;
    string name;

    void getId(){
      cout<<"Student " << name << "'s id is " << id <<endl;
    }
};

int main(void){

Student s1;
s1.id = 7;
s1.name = "Cristiano Ronaldo";
s1.getId();

Box b1 , b2;
b1.breadth = 23;
b1.height = 22;
b1.length = 23.45;
b2.breadth = 23.23;
b2.height = 23.78;
b2.length = 29.2345;

cout << "First box's volume :" << b1.breadth * b1.height * b1.length << endl;
cout << "Second box's volume :" << b2.breadth * b2.height * b2.length << endl;

return 0;
}