#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
  double real;
  double img;

public:
  Complex() {}

  Complex(double _real, double _img)
  {
    real = _real;
    img = _img;
  }
  Complex *add(Complex *num1, Complex *num2)
  {
    return new Complex(num1->real + num2->real, num1->img + num2->img);
  }

  void displayInfo()
  {
    cout << real << (img < 0 ? "" : "+") << img << "i";
  }
};

int main(void)
{

  double r, i;
  cout << "Real ::";
  cin >> r;
  cout << "Real ::";
  cin >> i;

  Complex *num1 = new Complex(r, i);

  Complex *num2 = new Complex(3.086, 78.98);

  Complex *result = result->add(num1, num2); // this will work for the compiler's optimization operations , but ultimately execution is happening by dereferencing a empty Complex type of pointer which points towards nothing .

  result->displayInfo();

  delete num1;
  delete num2;
  delete result;

  return 0;
}