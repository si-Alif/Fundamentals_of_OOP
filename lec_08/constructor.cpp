#include <bits/stdc++.h>
using namespace std;

class Employee{
  public :
    Employee(){
      cout<<"Employee default constructor called"<<endl;
    }
};

Employee::Employee(){
  cout<<"DEfault constructor outside the main class constructor"<<endl;
};

int main(void){

  Employee e1 , e2;

return 0;
}