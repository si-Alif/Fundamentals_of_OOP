#include <bits/stdc++.h>
using namespace std;

class Animal {
  public :
  Animal(){
    cout<<"Sound"<<endl;

  }
};

class Dog : public Animal{
  public :
    void sound(){ // overriding the inherited member function's definition
      cout<<"Bark"<<endl;
    }
};

class A{
  int a = 4;
  int b = 5;
  public :
    int mul(){
      return a*b;
    }
};

class B : public A{
  public :
    int mul(){
      return 1*3;
    }
    void display(){
      cout<<"Multiplication : "<<mul()<<endl;
    }
};

class C : private A{
  public :
    C(){
      int res = mul();
      cout<<"Multiplication result of A's variables state in C : "<<res<<endl; // mul is private to class C's instances and classes derived from it . But as C is derived from A , it can access it
    }
}; // private inheritance : now C class can inherit attributes from A but anyone who is instantiated or derived from C won't be able to retrieve any of the attributes

int main(void){
  Dog d; // as Dog is derived from Animal , it calls the default constructor(if any) even if we don't call it explicitly. Base classes instance is implicitly generated as a part of the derived class instance
  B b;
  b.display();

  C c; // c.mul(); // error as mul() is private from class C's perspective

return 0;
}