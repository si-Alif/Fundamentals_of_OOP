#include <bits/stdc++.h>
using namespace std;

class Employee{
  private :
    int id ;
    double salary;
  protected :
    string name ;
  public :
    Employee(int id , double salary , string name ){
      this->id = id;
      this->salary = salary;
      this->name = name;
    }

    string getName() const {
      return this->name;
    }

    int getId() const{
      return this->id;
    }

    double getSalary() const{
      return this->salary;
    }

    void updateSalary(double increment){
      this->salary = increment;
    }

    void updateName(string newName){
      this->name = newName;
    }
};

class Manager : public Employee{
  private :
    double bonus;
  public :
    Manager(int id , double salary  , string name , double bonus) : Employee(id , salary , name){ // equivalent to super keyword in java
      this->bonus = bonus;
      this->updateSalary(this->getSalary() + this->bonus);
    }

    double getBonus() const{
      return this->bonus;
    }

    void updateBonus(double increment){
      this->bonus = increment - this->bonus;
      this->updateSalary(this->getSalary() + this->bonus);
    }

};


int main(void){

  Employee e1(1 , 10000 , "Jane Doe");
  Manager m1(2 , 20000 , "John Doe" , 10000);


  cout << m1.getSalary() << endl;
  m1.updateBonus(15000);
  cout << m1.getSalary() << endl;


return 0;
}