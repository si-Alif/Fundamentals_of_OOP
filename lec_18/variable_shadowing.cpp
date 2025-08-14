#include <bits/stdc++.h>
using namespace std;

class Test{
  private:
    int a ;
  public :
    // Test(int a){
    //   a = a; // here the parameter a assigns it's value to itself i.e a = 10 ;
    // };

    Test(int a) : a(a) {}; // in this case a() is the local variable of the object but (a) is the parameter of the constructor .
    //⭐⭐⭐ This exact line is a syntactic sugar of writing Test(int a){this-> a = a ;}

    void _print(){
      cout<<a<<endl;
    }

};

class String_{
  private :
    string str;
  public :
    void setString(string str){
      this->str = str;
    }

  void get_and_set(string str){
    this->setString(str);

    cout << "The string is : " << str << endl;
  }
};

int main(void){

  String_ s1;
  s1.get_and_set("Hello");

  Test t1(10);
  t1._print();

return 0;
}