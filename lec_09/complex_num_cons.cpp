#include <bits/stdc++.h>
using namespace std;

class Complex{
  private :
    double real;
    double img ;
  public :
    Complex(){}

    Complex(double _real , double _img){
      real = _real;
      img = _img;
    }
    Complex* add(Complex* num2 ){
      return new Complex(real + num2->real , img + num2->img);
    }

    void displayInfo(){
      cout<<real <<( img < 0 ? "" : "+" )<< img << "i";
    }
};

int main(void){

  double r ,i;
  cout<<"Real ::";
  cin>>r;
  cout<<"Real ::";
  cin>>i;

  Complex* num1 = new Complex(r ,i);

  Complex* num2 = new Complex(3.086 , 78.98);

  Complex* result = num1->add(num2); // OOP standard way , using the defined member function via an instance of the class Complex

  result->displayInfo();

  delete num1;
  delete num2;
  delete result;

return 0;
}