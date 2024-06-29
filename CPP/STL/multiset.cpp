#include <bits/stdc++.h>
using namespace std;
void print(multiset <string> &m){
  for(string value : m){
    cout << value << endl;
  }
}

int main(){
  multiset<string> s;
  s.insert("r");
  s.insert("e");
  s.insert("v");
  s.insert("r");
  print(s);
}