#include <bits/stdc++.h>
using namespace std;

class Addition{

  double feet , inch;
  public :
    void setValue(double _feet , double _inch){
      feet = _feet;
      inch = _inch;
    }

    static Addition* add_2_distances(Addition* dis1 , Addition* dis2){
      Addition* res = new Addition();
      double total_inches = dis1->inch + dis2->inch;
      double total_feet = dis1->feet + dis2->feet;

      total_feet += floor(total_inches / 12.0);
      total_inches = fmod(total_inches , 12.0);

      res->feet = total_feet;
      res->inch = total_inches ;

      return res;

    }

    void displayRes(){
      cout<< "Result :" << feet << "ft. " << inch<< " inches";
    }

};

int main(void){

  Addition dis1 , dis2;

  double f1 , f2 , i1 , i2;
  cin>>f1 >>i1 >>f2>>i2;

  dis1.setValue(f1 , i1);
  dis2.setValue(f2 , i2);

  Addition* res = Addition::add_2_distances(&dis1 , &dis2);

  res->displayRes();

  delete res; // to prevent memory leakage

return 0;
}