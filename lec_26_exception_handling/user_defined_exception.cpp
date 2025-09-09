#include <bits/stdc++.h>
using namespace std;

// exception is the parent of all the exception classes available in c++
class MyException : public exception{
  public :
    const char* what() const throw(){
      return "MyException :: Maybe the denom is zero";
    }
};

// exceptions are elegant ways to handle errors . Exceptions are used to handle ⭐runtime errors⭐ . An exception is raised when the code compiled correctly but there was some errors or bugs while running the program . That's when the exception handlers becomes crucial to tell the program what to do if certain conditions are met or what to do if the error that was raised is completely unknown to us .

// In your program you can create your own exception classes by inheriting from the exception abstract class to define your own exceptions . The throw keyword is used to throw an exception via the defiend pure virtual function what().

// In you main program , you can use the try-catch block to handle exceptions . In the try block , you can write the code that might raise the exception . In the catch block , you can write the code that will handle the exception with a parameter of type exception that it should catch and handle .

int main(void){

  try{

    int a  = 12;
    char b = 'a';
    // cin>>a>>b;

    if(b == 0){
      MyException e;
      throw e;
    }
    else cout<<(a / b)<<endl;
  }
  // if the exception thrown is of the type MyException , the catch block will be executed
  catch(MyException& e){
    cerr<<e.what()<<endl;
  }
  // If the exception thrown is not of the type of any other exceptions catch block , then this catch block will be executed
  catch(...){
    cerr<<"Something went wrong"<<endl;
  }

return 0;
}