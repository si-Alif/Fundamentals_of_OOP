#include <bits/stdc++.h>
using namespace std;

double divide(double a, double b){
  if(b == 0){
    // throw throws the codes execution flow straight to the catch block of this type's exception . Thus any code below it will not be executed
    throw runtime_error("The denominator cannot be zero");
  }
  return a / b;
}

double addition(double a , double b){return a + b;}
double subtraction(double a , double b){return a - b;}
double multiplication(double a , double b){return a * b;}

int main(void){

  double a , b;
  char op;
  cin>>a>>b;
  cout << "Enter operator (+ , - , * , /): ";
  cin >> op;

  try {

    switch (op) {
      case '+': cout << addition(a , b) << endl; break;
      case '-': cout << subtraction(a , b) << endl; break;
      case '*': cout << multiplication(a , b) << endl; break;
      case '/': cout << divide(a , b) << endl; break;
      default: throw invalid_argument("Invalid operator");
    }
  }
  catch(exception& e){
    cerr << e.what() << endl;
  }

return 0;
}