#include<iostream>
#include<string>
using namespace std;
int main()
{
    // int n;
    // cout<<"Enter the size of string: ";
    // cin>>n;

    // string arr[n];
    // cout<<"Enter strings: "<<endl;
    // for(int i=0;i<=n-1;i++)
    // {
    //     cin>>arr[i];
    // }
    string arr[] = {"0123", "0023", "456", "00182", "940", "002901"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for(int i=1;i<=5;i++)
    {
        int x = stoi(arr[i]);
        if(x>max)
        {
            max = x;
            maxS = arr[i];
        }
    }
    cout<<maxS;
}