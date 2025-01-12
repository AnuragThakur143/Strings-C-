#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //size or length
    string str="anurag jjshj sdjs";
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;


    //push_back
    string str1 = "abcd";
    cout<<str1<<endl;
    str1.push_back('e');
    str1.push_back('f');
    str1.push_back('g');
    str1.push_back('h');
    cout<<str1<<endl;


    //pop_back
    string str2 = "anurag";
    cout<<str2<<endl;
    str2.pop_back();
    str2.pop_back();
    cout<<str2<<endl;


    //updation as append
    string s = "abc";
    cout<<s<<endl;
    string t = "def";
    s = t+s+t;//append
    cout<<s<<endl;
    s = "xyz"+s;
    cout<<s<<endl;



    //reverse
    string str3 = "abcde";
    cout<<str3<<endl;
    reverse(str3.begin(), str3.end());
    cout<<str3<<endl;
    reverse(str3.begin()+2, str3.end()-1);
    cout<<str3<<endl;
    reverse(str3.begin()+2, str3.begin()+4);
    cout<<str3<<endl;
}