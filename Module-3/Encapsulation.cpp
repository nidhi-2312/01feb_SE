#include<iostream>
using namespace std;
class Capsual
{
    int id;
    string nm;
public:
    int get()
    {
        cout<<"Enter your id:";
        cin>>id;
        cout<<"Enter your name:";
        cin>>nm;
        return 0;
    };
    int show()
    {
        cout<<nm<<" your id is:"<<id;
        return 0;
    };
};
int main()
{
    Capsual cap;
    cap.get();
    cap.show();
};