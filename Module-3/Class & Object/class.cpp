#include<iostream>
using namespace std;
class stdata
{
    // Variable which was define inside the class is known as 'data member'
    int id;
    string nm;
    // Function which was define inside the class is known as 'member function'
public:
    int show()
    {
        cout<<"Enter the student's id:";
        cin>>id;
        cout<<endl<<"Enter your name:";
        cin>>nm;
        return 0;
    }
    int print(){
        cout<<nm<<" your id is:"<<id;
        return 0;
    };
};
int main()
{
    stdata st;
    st.show();
    st.print();
    return 0;
}
