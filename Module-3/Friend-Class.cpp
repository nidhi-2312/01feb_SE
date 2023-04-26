#include<iostream>
using namespace std;
class Friend{
    int a;
public:
    friend class Temp;
};
class Temp
{
public:
    void data(Friend &obj){
        cout<<"Enter the value of the a:";
        cin>>obj.a; 
        cout<<"Value of the a:"<<obj.a;
    }
};
int main()
{
    Friend f1;
    Temp t1;
    t1.data(f1);
    return 0;
}
