#include<iostream>
using namespace std;
int no = 100;

int main()
{
    int no = 10;
    cout<<"Value of local variable no is:"<<no;
    cout<<"\nValue of global variable no is:"<<::no;
    return 0;
}
