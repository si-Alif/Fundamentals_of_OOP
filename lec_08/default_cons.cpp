#include <bits/stdc++.h>
using namespace std;

class Book{
  private :
    string title;
    string author;
    double price;
  public :
    // Book(){
    //   title = "Unknown";
    //   author = "Unknown";
    //   price = 0.0;
    // }

    // One liner way to mimic this exact functionality
    Book() : title("Unknown")  , author("Unknown") , price(0.0) {}

    void display_attributes(){
      cout<< "Following Book details : \n";
      cout<<"Title : "<<title<<"\n";
      cout<<"Author : "<<author<<"\n";
      cout<<"Price : "<<price<<"\n";
    }
};

int main(void){

  Book b1;
  b1.display_attributes();

return 0;
}