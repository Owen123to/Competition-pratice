#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100],n,countt;
    cin>>aa[0];
    while(aa[0]!=-1)
    {
        for(n = 1;;n++)
        {
            cin>>aa[n];
            if(aa[n]==0) break;
        }
        countt = 0;
        for(int i = 0;i < n;i++)
            for(int j = i+1;j < n;j++)
        {
            if(aa[i]*2==aa[j] || aa[j] * 2== aa[i])
                countt++;
        }
        cout<<countt<<endl;
        cin>>aa[0];
    }
}
