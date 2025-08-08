#include <bits/stdc++.h>
using namespace std;

class A {
  private:
    int a = 10;
  public:
    void get_a(){
      cout<<"private data member : " << a << endl;
    }
};

class B {
  protected :
    int b = 20;

  public :
    int public_val = 30;
    void get_b(){
      cout <<"protected data member : " << b << endl;
    }
};

class Multi_level : public A , private B{
  public :


    void get_c(){
      // cout << "A's data member : " << a << endl;
      cout << "B's data member : " << b << endl;
    }
};

class C : public Multi_level{
  public :
    void get_d(){
      // cout << "A's data member : " << a << endl;  ---> cz it's already private while it was defined
      // cout << "B's data member : " << b << endl; ---> cz Multi_level inherited "B" class  as private , thus the data member became private in Multi_level class 
    }
};

int main(void){

  Multi_level ml1;
  ml1.get_a();
  // ml1.get_b();
  ml1.get_c();

return 0;
}