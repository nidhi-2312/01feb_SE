#include<iostream>
using namespace std;
class A
{
public: 
    void a()
    {
        cout<<endl<<"This is grand parent class.";
    }
};
class B : public A
{
public: 
    void b()
    {
        cout<<endl<<"This is parent class.";
    }
};
class C : public B
{
public: 
    void c(){
        cout<<endl<<"This is child class.";
    } 
};
int main()
{
    C c1;
    c1.a();
    c1.b();
    c1.c();
    return 0;
}
