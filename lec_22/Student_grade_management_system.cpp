#include <bits/stdc++.h>
using namespace std;

class Student{
  private :
    string name;
    int roll;
    int age;
    char grade;

  public :
    Student(){
      name = "Unknown";
      roll = 0;
      age = 0;
      grade = 'F';
    }

    Student(string name , int roll , int age , char grade){
      this->name = name;
      this->roll = roll;
      this->age = age;
      this->grade = grade;
    }

    void setName(string name){
      this->name = name;
    }
    void setRoll(int roll){
      this->roll = roll;
    }
    void setAge(int age){
      if (age > 0) this->age = age;
      else cout << "Invalid age";
    }
    void setGrade(char grade){
      if (grade >= 'A' && grade <= 'F') this->grade = grade;
      else cout << "Invalid grade\n";
    }

    string getName() const {
      return this->name;
    }
    int getRoll() const{
      return this->roll;
    }
    int getAge() const{
      return this->age;
    }
    char getGrade() const{
      return this->grade;
    }

    void display() const{
      cout << "Name : " << this->name << endl;
      cout << "Roll : " << this->roll << endl;
      cout << "Age : " << this->age << endl;
      cout << "Grade : " << this->grade << endl;
    }

};


int main(void){

  Student s1("zoro" , 1 , 20 , 'A');
  s1.display();

  Student s2;
  s2.setName("Luffy");
  s2.setRoll(2);
  s2.setAge(21);
  s2.setGrade('Z');
  s2.display();

return 0;
}