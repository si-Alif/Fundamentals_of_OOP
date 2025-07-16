#include <bits/stdc++.h>
using namespace std;

class Vehicle{
  public :
    string brand;
    void showBrand(){
      cout<< "Brand :" << brand <<endl;
    }
};

class Car : public Vehicle{// Car class is pulically inheriting Vehicle class

  //    Vehicle
  //      ^
  //      |
  //      |
  //     Car
  public :
    string model;
    void showModel(){
      cout<< "Model :" << model<<endl;
    }

  };

int main(void){

  Car myCar;

  myCar.brand = "Toyota";
  myCar.model = "Corolla";
  myCar.showBrand();
  myCar.showModel();

return 0;
}

