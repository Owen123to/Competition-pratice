#include<iostream>
#include<string>
using namespace std;
string change(string s)
{
    int sum = 0;
    for(int i = 0;i<s.size();i++)
        sum+=s[i]-'0';
    return to_string(sum);
}
int main()
{
    string s = "";
    while(cin>>s)
    {
        while(s.size()>1)
            s = change(s);
        cout<<s<<endl;
    }
}