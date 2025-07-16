#include <bits/stdc++.h>
using namespace std;

class Distance{
  double inches , feet;
  public :
    void setDistance(double _feet , double _inches){
      inches = _inches;
      feet = _feet;
    }
    Distance* addition(Distance* d){
      Distance* result  = new Distance();
      result->feet = feet + d->feet;
      result->feet += floor((d->inches + inches) / 12.0);
      result->inches = fmod((d->inches + inches)  ,  12.0);
      return result;
    }
    void showResult(){
      cout<<"Feet : " << feet << " ;Inches : " << inches<<endl;
    }


};

int main(void){

  Distance d1;
  Distance* d2 = new Distance();
  Distance* res = new Distance();
  d1.setDistance(10 , 6.673);
  d2->setDistance(11 , 9.067);
  res = d1.addition(d2); // mimicing what python does with it's values using addition method in it's value based object model 
  res->showResult();

  delete d2 ;
  delete res;

return 0;
}