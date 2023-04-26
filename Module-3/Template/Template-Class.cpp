#include<iostream>
using namespace std;
template <typename T>
class Template
{
public:
    Template(T a, T b){
        cout<<"Division of a and b is:"<<a/b<<endl;
    };
};  
int main()
{
    Template <int> temp(12, 5);
    Template <float> temp1(5, 2);
    return 0;
}
