#include <bits/stdc++.h>
using namespace std;

int main(void){

  ifstream file("input.txt");
  if(!file){
    cout << "Error in opening file" << endl;
    return -1;
  }

  int a, b;
  file >> a >> b;
  file.close();

  ofstream fw("output.txt");
  fw<< "The product of " << a << " and " << b << " is " << a * b << " - written from the C++ program"<< endl;

return 0;
}