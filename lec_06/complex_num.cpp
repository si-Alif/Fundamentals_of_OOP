#include <bits/stdc++.h>
using namespace std;

class ComplexNumber{
  public :
  int real , img;
    ComplexNumber(int _real , int _img){
      real = _real ;
      img = _img;
    }
};

ComplexNumber* CalculateMul(const ComplexNumber* num1 ,const ComplexNumber* num2){
  int realPart = (num1->real * num2->real) - (num1->img * num2->img);
  int imagPart = (num1->real * num2->img) + (num1->img * num2->real);

  ComplexNumber* ans = new ComplexNumber(realPart , imagPart);
  return ans;
};

int main(void){

  ComplexNumber num1(1 ,4);
  ComplexNumber num2(5 ,1);

  ComplexNumber* ans = CalculateMul(&num1, &num2);
  cout<< "Multiplication of two Complex Number : "<<ans->real << (ans->img < 0 ? "" : "+") <<ans->img<<"i" ;

  return 0;
}