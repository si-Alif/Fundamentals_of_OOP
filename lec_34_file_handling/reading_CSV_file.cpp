#include <bits/stdc++.h>
using namespace std;

int main(void){

  ifstream fr("input.csv");

  // line represents a single line and cell represents a single cell of that line while reading the file in our program
  string line , cell;

  if(fr.is_open()){
    // read each line and store it in "line" variable using the getline() method
    while(getline(fr , line)){
      stringstream ss(line);
      // getline(<where_to_get_it_from> , <where_to_store_it> , <delimiter>)
      while(getline(ss , cell , ',')){
        cout << cell << " ";
      }
      cout << endl;
    }
    fr.close();
  }
  else cout << "File not found" << endl;

return 0;
}