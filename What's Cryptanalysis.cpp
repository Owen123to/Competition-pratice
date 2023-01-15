#include<iostream>
#include<cctype>
using namespace std;  
int count[256]= {0},len;
int main()
{
    int n = 0;
    cin>>n;
    cin.ignore();
    string c = "";
    while(n--)
    {
        getline(cin,c);
        len += c.size();
        for(int i = 0;i<c.size();i++)
        count[toupper(c[i])]++;
    }
    char d;
    while(len--)
    {
        if(len == 0) break;
        for(d = 'A';d<='Z';d++)
        {
            if(count[d] == len)
            cout<<d<<" "<<count[d]<<endl;
        }
    }
    return 0;
}