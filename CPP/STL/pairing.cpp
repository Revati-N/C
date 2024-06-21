#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p_array[6];
    p_array[0] = {1,"R"};
    p_array[1] = {2,"E"};
    p_array[2] = {3,"V"};
    p_array[3] = {4,"A"};
    p_array[4] = {5,"T"};
    p_array[5] = {6,"I"};
    for(int i =0; i<6; i++){
        cout << p_array[i].first <<" "<<p_array[i].second<<endl;
    }
    cout <<endl<< "After Swapping: "<<endl;
    swap(p_array[1],p_array[5]);
    for(int i =0; i<6; i++){
        cout << p_array[i].first <<" "<<p_array[i].second<<endl;
    }
}