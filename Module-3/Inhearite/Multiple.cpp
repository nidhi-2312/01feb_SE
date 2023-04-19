#include<iostream>
using namespace std;
class A{
public:
    int a()
    {
        cout<<"This is class A.\n";
        return 0;
    }
};
class B{
public:
    int b()
    {
        cout<<"This is class B.\n";
        return 0;
    }
};

class Child : public A, public B{
public:
    int c()
    {
        cout<<"This is child class.";
        return 0;
    }
};
int main()
{
    Child c1;
    c1.a();
    c1.b();
    c1.c();
    return 0;
}

