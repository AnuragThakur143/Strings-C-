#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string str = "anurag   is a student";
    stringstream ss(str);
    string temp;

    while(ss>>temp)
    {
        cout<<temp<<endl;
    }
}