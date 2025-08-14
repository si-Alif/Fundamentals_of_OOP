#include <bits/stdc++.h>
using namespace std;

class A{
  public :
    void sound(){
      cout<<"A sound"<<endl;
    }
};

class B: public A{
  public :
    void sound(){
      cout<<"B sound"<<endl;
    }
};

class C: public A{
  public :
    void sound(){
      cout<<"C sound"<<endl;
    }
};


int main(void){

  A *a = new A();
  A *b = new B(); // the pointer type is A , thus in the vtable b->sound() will invoke A's sound function
  B *b1 = new B(); // as obvious , this will invoke B's sound function

  a->sound(); // A sound
  b->sound(); // A sound
  b1->sound(); // B sound

return 0;
}