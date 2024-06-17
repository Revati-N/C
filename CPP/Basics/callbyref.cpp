#include<iostream>

using namespace std;

void swaps (int *x, int *y)
{
    int swaps;
    swaps = *x;
    *x = *y;
    *y = swaps;
}

int main()
{
    int x = 1500;
    int y = 200;
    swaps(&x, &y);
    cout << "X is "<<x<<endl;
    cout << "Y is " << y << endl;
    return 0;
}
