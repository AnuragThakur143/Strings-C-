#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s = "abcdef";
    // cout<<s.substr(1)<<endl;
    // cout<<s.substr(2,2);//s.substr(idx,len)

    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int n = str.length();
    cout<<str.substr(n/2);
}