#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //this sort gives result on ascii value order
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s;
}