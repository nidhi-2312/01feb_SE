#include<iostream>
using namespace std;
class A 
{
public:
    /*A(int no) //Parametrize Constructor
    {
        cout<<no<<" value.\n";
    }*/
    A() //Default Constructor
    {
        cout<<"\nThis is class a.";
    }
};
// Protected property inherited by virtual keyword
class B : public virtual A{
public: 
    B(){
        cout<<"\nThis is class B.";
    }
};
class C : public virtual A
{
public:
    C(){
        cout<<endl<<"This is class C.";
    }
};
class D : public B, public  C 
{
public:
    D()
    {
        cout<<endl<<"This is class D.";
    }
};
int main()
{
    // A a1(23);
    D d1;

    return 0;
}
