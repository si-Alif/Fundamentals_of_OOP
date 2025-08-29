#include <bits/stdc++.h>
using namespace std;

class Base{
  public :
    virtual void show() = 0;
};

class Derived : public Base{
  public :
    void show(){
      cout << "Derived Class" << endl;
    }

};

int main(void){



return 0;
}