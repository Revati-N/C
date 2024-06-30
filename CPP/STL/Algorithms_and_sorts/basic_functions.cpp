#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector <int> v(n);
  for(int i=0; i<n; ++i){
    cin >> v[i];
  }
  
  int min = *min_element(v.begin(), v.end());
  cout <<"Min: "<< min << endl;
  
  int max = *max_element(v.begin(), v.end());
  cout << "Max: " <<max << endl;
  
  int sum = accumulate(v.begin(), v.end(),0);
  cout << "Sum: " << sum <<endl;
  
  // Counts how many times an element occurs in a vector
  
  int x;
  cin >> x;
  
  int ct = count(v.begin(), v.end(), x);
  cout << "Occurs: "<< ct << endl;
  
  // For reversing a vector
  
  reverse (v.begin(),v.end());
  for(auto val : v){
    cout <<val << " ";
  }
}