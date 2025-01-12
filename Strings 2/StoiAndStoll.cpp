#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "123456";
    int x = stoi(str1);
    cout<<x+1<<endl;

    string str2 = "123456789123456";
    long long y = stoll(str2);
    cout<<y+1<<endl;
}