#include <bits/stdc++.h>
using namespace std;

struct Student{
  string name;
  int age;
};

string serialize(const Student &s){
  return s.name + "-" + to_string(s.age);
}

Student deserialization(const string& s){
  stringstream ss(s);
  Student s1;
  getline(ss , s1.name , '-');
  ss >> s1.age;
  return s1;
}

int main(void){

  Student s1{"Hero Alom" , 69};
  string og_str = serialize(s1);

  // manipulating the structure
  s1.name = "Villain Alom";
  s1.age = 99;

  cout << s1.name << " " << s1.age << endl;

  Student OG = deserialization(og_str);
  cout << "You can imitate me , but you can't be me - by the OG " << OG.name << " and my age is " << OG.age <<  " years" <<endl;

return 0;
}