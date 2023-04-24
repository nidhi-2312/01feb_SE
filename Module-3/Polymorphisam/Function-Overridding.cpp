#include<iostream>
using namespace std;
class Poly
{
public:
    // Same name but  different class
    int sub(int a, int b)
    {
        cout<<"Subtraction of the a and b is:"<<a - b <<endl;
        return 0;
    };
};
class Phism
{
public:
    // Overriding
    int sub(int a, int b)
    {
        cout<<"Subtraction of the a and b is:"<<a - b;
        return 0;
    }

};
int main()
{
    Poly p1;
    Phism p2;
    p1.sub(12,23);
    p2.sub(89,56);
    return 0;
}
