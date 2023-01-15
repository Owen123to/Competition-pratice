#include<bits/stdc++.h>
using namespace std;
int total  = 0, prime[1000000];
int main()
{
    for(int i = 0;i<1000000;i++)
        prime[i] = 1;
    prime[0]  = 0,prime[1] = 0;
    for(int i = 2;i<1000000;i++)
    if(prime[i])
        for(int j = i+i;j <1000000;j+=i)
        prime[j] = 0;
    int a = 0, d =0 ,n =0;
    cin>>a>>d>>n;
    long long int m = 0;
    while(a||d||n)
    {
        int cnt = 0;
        for(m = a;cnt<n;m+=d)
        if(prime[m])
        cnt++;
    cout<<m-d<<endl;
    cin>>a>>d>>n;
    }
}
