#include<iostream>
using namespace std;
class This
{
public:
    int no = 100;
    int data()
    {
        int no = 10;
        cout<<"Value of local variable no is:"<<no;
        cout<<"\nValue of data member no is:"<<this->no;
        return 0;
    }
};
int main()
{   
    This obj;
    obj.data();
    return 0;
}
