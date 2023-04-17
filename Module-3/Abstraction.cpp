#include<iostream>
using namespace std;
class Abstract
{
    int id;
public:
    int get()
    {
        cout<<"Enter the value of id:";
        cin>>id;
        return 0;
    }
    int show(){
        cout<<"Your id is:"<<id;
        return 0;
    };    
};
int main()
{
    Abstract abs;
    abs.get();
    abs.show();    
    return 0;
}
