#include <bits/stdc++.h>
using namespace std;

int main(void){

  // instantiating an object of ofstream class which is used to create the file and write data to a file
  ofstream write_file("example.txt");
  ifstream read_file("example.txt");

  // is_open() method opens the stream to a file . It returns a boolean value .So as a conditional we use this to open and check if the operation was successful or not at the same time
  if (write_file){
    if(write_file.is_open()){
      // log into the file object
      write_file << "This is an line.\n";
      write_file << "This is another appended line.\n";
      write_file.close();
    }
    else{
      cout << "Unable to open file for writing" << endl;
    }
  }
  else{
    cout << "File not created" << endl;
  }
  if(read_file){
    string line ;
    if(read_file.is_open()){
      // getline() method reads a line from the file and stores it in the string variable passed as an argument
      while(getline(read_file,line)){
        cout << line << endl;
      }
      read_file.close();
    }
    else {
      cout << "Unable to open file for reading" << endl;
    }
  }
  else{
    cout << "File not found" << endl;
  }

return 0;
}