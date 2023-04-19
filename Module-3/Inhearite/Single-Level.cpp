#include<iostream>
using namespace std;
class Base{
public:
    int no;
    Base(){
        cout<<"Enter the value of no:";
        cin>>no;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout<<"Value of no is:"<<no;
    }
};
int main()
{
    Derived d1;
    
    return 0;
}
