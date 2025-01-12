#include<iostream>
using namespace std;
int main()
{
    string str="anurag";
    cout<<str<<endl;
    // str[2]='f';
    for(int i=0;str[i]!='\0';i++)
    {
        if(i%2==0) str[i]='a';
    }
    cout<<str;
}