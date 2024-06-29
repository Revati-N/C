#include <bits/stdc++.h>
using namespace std;
void print(unordered_set <string> &m){
  for(string value : m){
    cout << value << endl;
  }
}

int main(){
  unordered_set<string> s;
  s.insert("r");
  s.insert("e");
  s.insert("v");
  print(s);
  auto it = s.find("e");
}