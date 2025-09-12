#include <bits/stdc++.h>
using namespace std;

int main(void){

  ofstream file("example.txt" , ios::app); // ios::app opens the file in append mode
  if(!file){
    cout << "Error in creating file" << endl;
    return -1;
  }

  file << "This is the appended line 1" << endl;
  file << "This is the appended line 2" << endl;

  file.close();

return 0;
}