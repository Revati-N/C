#include <iostream>
using namespace std;
int main()
{
    int number=30;
    int * p;
    p=&number;
    cout<<"Value of p variable by num is:"<<number<<endl;
    cout<<"Value of p variable by pointer is:"<<*p<<endl;
    cout<<"Address of number variable is:"<<&number<<endl;
    cout<<"Address of p variable is:"<<p<<endl;

    return 0;
}
