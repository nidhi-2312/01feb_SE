#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream out;
    out.open("D:/nidhi batch/software engineering/01feb_se/module-3/hello.txt");
    out<<"Hello";
    out.close();
    ifstream in("D:/nidhi batch/software engineering/01feb_se/module-3/hello.txt");
    in>>str;
    cout<<str;
    return 0;
}
