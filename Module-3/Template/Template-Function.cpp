#include<iostream>
using namespace std;
template <class T>
T data(T a, T b)
{
    return a+b;
}
int main()
{
    cout<<data <int> (12, 58);
    cout<<endl<<data <float> (57,6.5);
    return 0;
}
