#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
  for(string value : s){
    cout << value << endl;
  }
}

int main(){
  set <string> s;
  s.insert("abc");
  s.insert("xyz");
  s.insert("pqr");
  print(s);
  auto it = s.find("pqr");
}