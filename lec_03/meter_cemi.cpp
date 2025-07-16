#include <bits/stdc++.h>
using namespace std;

class Distance
{
private:
  int meter;
  int cemi;

public:
  void insertDitance()
  {
    cout << "Enter centimeter : ";
    cin >> cemi;
    cout << "Enter meter : ";
    cin >> meter;
  }
  double getDistanceInCentimeter(){
    return ((meter * 100.0) + cemi);
  }
  double getDistanceInMeter(){
    return meter + (cemi/ 100.0);
  }

  Distance addDistance(Distance &d1 , Distance &d2){
    Distance result;

    result.meter = d1.meter + d2.meter;
    result.cemi = d1.cemi + d2.cemi;
    if(result.cemi >= 100){
      result.meter += result.cemi /100;
      result.cemi %= 100;
    }

    return result;

  }

};

int main(void){

  Distance d1;
  d1.insertDitance();
  cout <<"Distance in meter : " <<d1.getDistanceInMeter();
  cout <<"Distance in centimeter : " <<d1.getDistanceInCentimeter();

  Distance d2 , d3 ;
  d2.insertDitance();
  d3.insertDitance();

  Distance temp  , result;
  result = temp.addDistance(d2 , d3);

  cout << "Added Distance meter :" << result.getDistanceInMeter();

  return 0;
}