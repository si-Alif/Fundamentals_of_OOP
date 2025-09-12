#include <bits/stdc++.h>
using namespace std;

int main(void){

  ofstream fw("data.txt");

  if(!fw){
    cout << "Error in creating file" << endl;
    return -1;
  }

  // setting a precision of 2 decimal places for floating point numbers in the file data.txt
  fw << fixed << setprecision(2);
  fw << 12.34567 << endl;
  fw << 45.67891 << endl;
  fw.close();

return 0;
}