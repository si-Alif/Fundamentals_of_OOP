#include <bits/stdc++.h>
using namespace std;

class Complex{
  private:
    int real;
    int imag;
  public:
  Complex(int _real , int _imag){
    real = _real;
    imag = _imag;
  }

  Complex add(Complex& num2){
    this->real += num2.real;
    this->imag += num2.imag;
    // return Complex(realPart , imagPart); ---> ✅return a newly created object using the updated values
    return *this ; // ✅return the current object as we've performed the operation in-place
  }

  void displayInfo(){
    cout<<real <<( imag < 0 ? "" : "+" )<< imag << "i";
  }

};

int main(void){

  Complex c1(3 , 4) , c2(5 , 6);
  c1.add(c2).displayInfo();



return 0;
}