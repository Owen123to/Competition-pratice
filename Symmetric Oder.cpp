#include<bits/stdc++.h>
using  namespace std;
void recurse(int n)
{
    string s;
    cin>>s;
    cout<<s<<endl;
    if(n--)
    {
        cin>>s;
        if(n--)
            recurse(n);
        cout<<s<<endl;
    }
}
int main()
{
    int n = 0,loop = 0;
    cin>>n;
    while(n)
    {
        cout<<"SET "<<++loop<<endl;
        recurse(n);
        cin>>n;
    }
    return 0;
}
