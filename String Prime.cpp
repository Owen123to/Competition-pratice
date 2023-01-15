#include<iostream>
#include<map>
using namespace std;
int prime[1500];
int total;
bool isprime(int temp)
{
    for(int i = 0;i<=total;i++)
    {
        if(temp == prime[i])
        return true;
    }
    return false;
}
int main()
{
    prime[0] = 2;
    for(int i = 3;i<2001;i++)
    {
        int index = true;
        for(int j = 0;prime[j]<=i&&prime[j]!=0;j++)
        {
            if(i%prime[j] == 0)
            index = false;
        }
        if(index == true)
        prime[++total] = i;
    }
    int num = 0;
    map<char,int> count;
    map<char,int>::iterator it;
    cin>>num;
    for(int i = 1;i<=num;i++)
    {
        string s,an = "";
        cin>>s;
        for(int j = 0;j<s.size();j++)
            count[s[j]]++;
        for(it = count.begin();it!=count.end();it++)
        {
            if(isprime(it->second))
            an+=it->first;
        }
        cout<<"Case "<<i<<": "<<an<<endl;
         count.clear();
    }
    return 0;
}
