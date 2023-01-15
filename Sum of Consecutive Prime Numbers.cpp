#include<bits/stdc++.h>
using namespace std;
const int maxp = 2000,n = 10000;
int prime [maxp], total = 0;
bool isprime(int k)
{
    for(int i = 0;i < total;i++)
        if(k%prime[i] == 0)
            return false;
        return true;
}
int main()
{
    for(int i = 2;i<n;i++)
        if(isprime(i))
        prime[total++] = i;
    prime[total] = n+1;
    int m;
    cin>>m;
    while(m)
    {
        int ans = 0;
        for(int i = 0;m>=prime[i];i++)
        {
            int sum = 0;
            for(int j = i;j<total&&sum<m;j++)
                sum+= prime[j];
            if(sum==m)
                ++ans;
        }
        cout<<ans<<endl;
        cin>>m;
    }
}
