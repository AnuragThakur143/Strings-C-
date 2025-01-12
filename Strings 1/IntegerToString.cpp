#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x = 123456789;
    string s = to_string(x);
    cout<<s<<endl;
    cout<<s.length();
}