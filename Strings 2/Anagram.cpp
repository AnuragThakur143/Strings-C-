#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter 1st string: ";
    cin>>s;

    string t;
    cout<<"\nEnter 2nd string: ";
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl<<t<<endl;
    if(s==t) cout<<"true";
    else cout<<"false";
}