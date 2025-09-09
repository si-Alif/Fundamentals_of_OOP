#include <bits/stdc++.h>
using namespace std;

double division(int a , int b){
  if(b == 0){
    throw runtime_error("Unexpected error happened");
  }
  return a / b;
}


int main(void){

  int a = 10 , b = 0;
  double n = 0;

  try{
    n = division(a , b);
    cout<<n<<endl;
  }
  catch (const exception& e){
    cerr<<e.what()<<endl;

  }


return 0;
}