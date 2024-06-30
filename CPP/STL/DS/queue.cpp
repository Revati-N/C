#include <bits/stdc++.h>
using namespace std;

int main(){
  queue<int> q;
  q.push(5);
  q.push(8);
  q.push(7);
  q.push(2);
  
  while(!q.empty()){
    cout << q.front() << endl;
    q.pop();
  }
}