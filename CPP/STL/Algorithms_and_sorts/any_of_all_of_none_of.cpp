#include <bits/stdc++.h>
using namespace std;

int main() {
  vector <int> v ={4,6,9};
  cout << all_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;
  
  vector <int> e = {2, -1, 5};
  cout << any_of(e.begin(), e.end(), [](int y){return y > 0;}) << endl;

  vector <int> c = { -11, 9, 5 };
  cout << none_of(c.begin(), c.end(), [](int z){return z >0;}) << endl;
}