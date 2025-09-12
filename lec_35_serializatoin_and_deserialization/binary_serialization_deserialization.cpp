  #include <bits/stdc++.h>
  using namespace std;

  class MyClass{
    public :
      int data ;
      MyClass(int d) : data(d){};

      void serialize(const string &filename){
        ofstream fw(filename , ios::binary);
        if(fw.is_open()){
          // For serialization , we need to provide byte of data and we get that easily as the computer saves data in bits anyway but this data address should be treated as character as it's 1 byte size , so it's easy to convert and work with . Thus write() / read() only work with char datatype pointer . We also pass another argument which is the size of data which is used as a determinant of the endpoint . So the first argument we passed works as the starting point and 2nd one as the end point determiner and data in between has to be converted .
          fw.write(reinterpret_cast<char*>(&data) , sizeof(data));
          fw.close();
          cout << "Serialization successful to " << filename << endl;
        }
        else {
          cout << "Unable to open file for writing" << endl;
        }
      }

      void deserialization(const string &filename){
        ifstream fr(filename , ios::binary);
        if(fr.is_open()){
          fr.read(reinterpret_cast<char*>(&data) , sizeof(data));
          fr.close();
          cout << "Deserialization successful from " << filename << endl;
        }
        else {
          cout << "Unable to open file for reading" << endl;
        }
      }

  };


  int main(void){
    //instantiating an object of MyClass with data 10
    MyClass m(10);

    // before deserialization
    cout << "Before deserialization : " << m.data << endl;

    // serializing the object in a binary file
    m.serialize("data.bin");

    // change the data
    m.data = 69l;
    cout << "Data reset to : " << m.data << endl;

    // after deserialization
    m.deserialization("data.bin");
    cout << "After deserialization : " << m.data << endl;

  return 0;
  }