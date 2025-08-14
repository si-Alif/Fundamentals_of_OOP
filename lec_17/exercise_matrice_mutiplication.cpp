#include <bits/stdc++.h>
using namespace std;

class Matrix{
  public :
    int row , col;
    int **data;
    Matrix(int r ,int c){
      row = r;
      col = c;
      data = new int*[row]; // allocating row sized array in the heap memory and assigning it's address to data
      for(int i = 0 ; i < row ; i++){
        data[i] = new int[col]; // creating col sized array in the heap memory and assigning it to each row
      }
    }

    void insertElements(){
      cout << "Enter elements for " << row << "x" << col << " matrix : \n";
      for(int i = 0 ; i< row ; i++){
        for(int j = 0 ;j< col ;j++){
          cin>>data[i][j];
        }
      }
    }

    void printMatrix(){
      for(int i = 0 ; i< row ; i++){
        for(int j = 0 ;j< col ;j++){
          cout<<data[i][j]<<" ";
        }
        cout<<"\n";
      }
    }

    Matrix operator *(Matrix &m2){
      if(col != m2.row){
        cout<<"Matrix multiplication is not possible\n";
        return Matrix(0,0);
      }
      Matrix result(row , m2.col);
      for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j< m2.col ; j++){
          result.data[i][j] = 0;
          for(int k = 0; k< row ; k++){
            result.data[i][j] += data[i][k] * m2.data[k][j];
          }
        }
      }
      return result;
    }

};

int main(void){

  Matrix m1(2,3);
  m1.insertElements();
  m1.printMatrix();
  Matrix m2(3,2);
  m2.insertElements();
  m2.printMatrix();
  Matrix result = m1 * m2; // overloading * operator which is used for number multiplication is now overloaded for matrix multiplication 
  result.printMatrix();


return 0;
}