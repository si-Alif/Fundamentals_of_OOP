#include <bits/stdc++.h>
using namespace std;

class Animal{
  public:
    string name;
    virtual void sound(){

    }
};

class Dog : public Animal{
  public :
  void sound() override{
    cout<<"Bark"<<endl;
  }
};

class Cat : public Animal{
  void sound() override{
    cout<<"Meow~"<<endl;
  }
};


int main(void){

  Animal *a = new Dog();
  a->sound();

return 0;
}