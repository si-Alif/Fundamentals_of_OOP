#include <bits/stdc++.h>
using namespace std;

class Maths{
  public :
    void add(int a,  int b , int c){
      cout<<"Summation : " << (a+ b + c) <<endl;
    }
    virtual void add(int a,  int b){
      cout<<"Summation : " << (a+ b ) <<endl;
    }
    // int add(int a,  int b , int c){ // overloading can't be done based on the return type alone
    //   cout<<"Summation : " << (a+ b + c) <<endl;
    // }

    // void add(int a, int b){ // compile time error as same method already exists
    //   cout << "Summation : " << (a + b) << endl;
    // }

    double add(double a , int b){
      cout << "Summation : " << (a + b) << endl;
    }

    virtual double add(double a , double b){
      cout << "Summation : " << (a + b) << endl;
    }

};

// Combining runtime and compile time polymorphism
class MathsExtended : public Maths {
  public :

    // void add(int a , int b, int c) override{ // ❌Error as this wasn't a virtual function
    // }

    void add(int a , int b ) override{
      cout << "Summation in runtime: " << (a + b) << endl;
    }

    double add(int a , double b) override{ //
      cout << "Summation(double) in runtime : " << (a + b) << endl;
    }

};


int main(void){

  Maths m1;
  m1.add(2 ,3);
  m1.add(2.0 , 4.0);
  m1.add(2.0 , 4.5);

  Maths *runtimeMath = new MathsExtended();

  runtimeMath->add(2, 5.0); // In C++, overriding can only occur for methods declared in the base class. So if a method signature exists only in the derived class, and the call is made via a base class pointer, it cannot be dispatched — not even via virtual functions.
  //This ensures that overload resolution(early binding) is always completed before runtime polymorphism(late binding) can even happen, thus preserving predictability and avoiding chaos in dispatch logic.

  return 0;
}