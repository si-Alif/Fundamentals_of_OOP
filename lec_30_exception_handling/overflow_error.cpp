#include <bits/stdc++.h>
using namespace std;

int multiply(int a , int b){
  // numeric_limits<int>::max() gives the maximum value that can be stored in an integer variable
  if(a > 0 && b > 0 && a > (numeric_limits<int>::max() / b)){
    throw overflow_error("Integer Overflow Occurred");
  }
  return a * b ;
}

int main(void){

  int a = INT_MAX , b = 2 ; 
  try{
    int result = multiply(a,b);
    cout << "Result : " << result << endl;
  }
  catch(overflow_error &e){
    cout << e.what() << endl;
  }


return 0;
}