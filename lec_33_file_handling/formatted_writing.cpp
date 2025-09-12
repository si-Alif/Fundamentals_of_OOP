#include <bits/stdc++.h>
using namespace std;

int main(void){

  ofstream fw("score.txt");

  if(!fw){
    cout << "Error in creating file" << endl;
    return -1;
  }

  if(fw.is_open()){
    // setw is used to set the width of the next input/output field
    // left is used to left align the output in the field
    fw <<left << setw(20) << "Name" << setw(10) << "Score" << endl;
    fw <<left << setw(20) << "Hero Alom" << setw(10) << 101 << endl;
    fw <<left << setw(20) << "Messi" << setw(10) << 99 << endl;
    fw <<left << setw(20) << "Ronaldo" << setw(10) << 98 << endl;
    fw.close();
  }
  else{
    cout << "Unable to open file score.txt for writing " << endl;
  }

return 0;
}