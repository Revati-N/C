#include <bits/stdc++.h>
using namespace std;
void print(map <int,string> &m){
  cout << m.size() << endl;
  for(auto &pr : m){
    cout << pr.first << " " << pr.second << endl;
  }
}
int main() {
  map <int, string> m;
  // 2 techniques to enter values in a map
  m[1] = "abc";
  m[5] = "cdc";
  m[3] = "acd";
  //2nd technique
  m.insert({4,"afg"});
  print(m);
  auto it = m.find(7);
  if (it == m.end()){
    cout << "No Value"<<endl;
  }
  else{
    cout << (it -> first) << " " << (it ->second);
  }
  
  m.erase(3);
  print(m);
}