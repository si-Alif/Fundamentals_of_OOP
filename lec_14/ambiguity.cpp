#include <bits/stdc++.h>
using namespace std;


class A {
  public :
    void display(){
      cout<<"Class A"<<endl;
    }
};

class B{
  public :
    void display(){
      cout<<"Class B"<<endl;
    }
};

class C : private A , private B{
  public :
    void view(){
      // display(); ❌❌❌ ----> this is ambiguous as display() is defined in both A and B classes and the compile is getting confused which one to invoke

      A::display(); // this works fine as we're explicitly defining which member function to invoke
    }
};

int main(void){

  C c1;
  c1.view();

return 0;
}