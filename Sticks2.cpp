#include<bits/stdc++.h>
using namespace std;
int sticks[65],vis[65];
int n,sum,digit;
bool cmp(int a,int b)
{
    return a>b;
}
bool dfs(int s,int cnt,int cnl,int length)//拼接長度,開始位置,應木條數,應木條長度
{
    if(cnl == digit)
        return true;
    for(int i = cnt;i<n;i++)
    {
        if(vis[i]||(sticks[i] == sticks[i-1]&&!vis[i-1]))
            continue;
        if(sticks[i]+s==length)
        {
            vis[i] = 1;
            if(dfs(0,0,cnl+1,length))
                return true;
                vis[i] = 0;
                return  false;
        }
        if(sticks[i]+s<length)
        {
            vis[i] = 1;
            if(dfs(sticks[i]+s,i+1,cnl,length))
                return true;
            vis[i] = 0;
            if(!s) return false;
        }
    }
    return false;
}
int main()
{
    while(cin>>n&&n)
    {
        for(int i = 0;i<n;i++)
        {
            cin>>sticks[i];
            sum+=sticks[i];
            vis[i] = 0;
        }
        int flag = 0;
        sort(sticks,sticks+n,cmp);
        for(int i = sticks[0];i<=sum/2;i++)
        {
            if(sum%i==0)
            {
                digit = sum/i;
                if(dfs(0,0,0,i))
                {
                    flag = 1;
                    cout<<i<<endl;
                    break;
                }
            }
        }
        if(!flag) cout<<sum<<endl;
    }
}
