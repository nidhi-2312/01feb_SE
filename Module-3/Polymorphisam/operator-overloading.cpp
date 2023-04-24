#include<iostream>
using namespace std;
class Operator
{
public:
    int a;
    int mul()
    {
        cout<<"Enter the value of a:";
        cin>>a;
        return 0;
    }
    // Operator overloading
    Operator operator++ ()
    {
        ++a;
    }
    void show()
    {
        cout<<"Value of a is:"<<a<<endl;
    }
};
int main()
{
    Operator obj;
    obj.mul();
    ++obj;
    obj.show();
    return 0;
}