#include <bits/stdc++.h>
using namespace std;

class Adder{
  public :
    Adder(int number = 0){
      total = number ;
    }

    void add(int number){
      total += number ;
    }

    int getTotal(){
      return total;
    }

    private :
      int total; // this is hidden from the outside world . Only way to manipulate this is via the getter and setter methods
};


int main(void){

  Adder a;
  a.add(10);
  a.add(50);
  a.add(80);

  cout <<"Total : " <<a.getTotal() << endl;

return 0;
}