#include <iostream>

using namespace std;

int cubes(int n)
{
    int cube;
    cube = n * n * n;
    return cube;
}

int main()
{
    int x;
    cout << "Enter number to cube: ";
    cin >> x;
    cout << "The cube of "<< x << " is "<<cubes(x);
}
