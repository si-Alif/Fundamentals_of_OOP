#include <bits/stdc++.h>
using namespace std;

class Test{
  private:
    int val ;
  public :
    Test(int _val) : val(_val){}
    void operator ++(){
      val+=69;
    }
    void _print(){
      cout<<val<<endl;
    }
};


int main(void){

  Test *t1 = new Test(10);
  ++(*t1); // this is just a syntactic sugar of writing t1->operator++();
  // this is considered as overloading as this has the same outline as pre-increment operator that works on raw data (i.e ++i --> i = i+1). Now that we're using the same thing for objects this is considered as overloading
  t1->_print();

return 0;
}