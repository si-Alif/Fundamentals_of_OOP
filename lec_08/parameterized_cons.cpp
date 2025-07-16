#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <math.h>

using namespace std;


class Book{
  private:
    string title ;
    string author ;
    double price;
  public :
    Book(string _title , string _author , double _price){
      title = _title;
      author = _author;
      price = _price;
    }

    void display_info(){
      cout << "Following Book details : \n";
      cout << "Title : " << title << "\n";
      cout << "Author : " << author << "\n";
      cout << "Price : " << price << "\n";
    }

};

class Circle{
  private :
    double radius ;
    double area;
  public :
    Circle(double radius){
      area =  M_PI * radius * radius;
    }
    void display_area(){
      cout<<"Area of the following circle : " << area<<endl;
    }
    void Perimeter(); // declaring a member function
};

// Circle::Circle(){
//   cout<<"Hello world" <<endl;
// }

void Circle::Perimeter(){ // defining the member function outside the class
  cout<< radius * 2 * M_PI <<endl ;
}

int main(void){

  Book b1("No longer Human" , "Osamu Dazai" , 20.99);
  b1.display_info();

  Circle c1(23.334);
  c1.display_area();
  c1.Perimeter();

return 0;
}