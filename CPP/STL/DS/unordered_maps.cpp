#include <bits/stdc++.h>
using namespace std;
void print(unordered_map <int,string> &m){
  cout << m.size() << endl;
  for(auto &pr : m){
    cout << pr.first << " " << pr.second << endl;
  }
}
int main() {
  unordered_map <int, string> m;
  // 2 techniques to enter values in a map
  m[1] = "abc";
  m[5] = "cdc";
  m[3] = "acd";
  //2nd technique
  m.insert({4,"afg"});
  print(m);
  
}