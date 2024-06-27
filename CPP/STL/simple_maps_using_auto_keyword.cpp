#include <bits/stdc++.h>
using namespace std;

int main() {
  map <int, string> m;
  // 2 techniques to enter values in a map
  m[1] = "abc";
  m[5] = "cdc";
  m[3] = "acd";
  //2nd technique
  m.insert({4,"afg"});
  for(auto &pr : m){
    cout << pr.first << " " << pr.second << endl;
  }
}