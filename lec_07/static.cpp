#include <bits/stdc++.h>
using namespace std;

int func(){
  int count = 0;
  count++;
  return count;
}

int staticFunc(){
  static int count = 0;
  count++;
  return count;
}

int main(void){

  cout<<func()<<endl;
  cout<<func()<<endl;

  cout<<staticFunc()<<endl;
  cout<<staticFunc()<<endl;

return 0;
}