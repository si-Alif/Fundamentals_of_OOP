#include <bits/stdc++.h>
using namespace std;

class A{
  public:
  int a;
  void get_a(){
    cout << "Enter A" << endl;
    cin >> a;
  }
};

class B : public A{
  public:
  int b;
  void get_b(){
    cout << "Enter B" << endl;
    cin >> b;
  }
};

class C : public A{
  public:
  int c;
  void get_c(){
    cout << "Enter C" << endl;
    cin >> c;
  }
};

class D : public C , public B{
  public :
  int d;
  void summation(){
    C::get_a();
    get_b();
    get_c();
    d = C::a + b + c;
    cout << "Summation : " << d << endl;
  }
};


int main(void){

  D d1;
  d1.summation();

return 0;
}