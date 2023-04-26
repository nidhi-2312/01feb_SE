#include<iostream>
using namespace std;
class Friend{
    int no;
public:
    friend int data(Friend &frnd);
};
int data(Friend &frnd)
{
    cout<<"Enter the value of the no:";
    cin>>frnd.no;
    cout<<"Value of the no is:"<<frnd.no;
    return 0;
}
int main()
{
    Friend obj;
    data(obj);
    return 0;
}
