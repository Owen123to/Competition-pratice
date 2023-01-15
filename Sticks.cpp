#include<bits/stdc++.h>
using namespace std;
int sticks[65],used[65];//�ˬd������p�O�_�Q����
int n, len;
bool dfs(int i,int l,int t)
{
    if(l==0)
    {
        t-=len;
        if(t==0) return true;
        for(i = 0;used[i];++i)
            used[i] = 1;
        if(dfs(i+1,len-sticks[i],t)) return true;
        used[i] = 0;
        t+=len;
    }
    else
    {
        for(int j = i;j<n;j++)
        {
            if(j>0&&(sticks[j]==sticks[j-1]&&!used[j-1])) continue;
            if(!used[j]&&l>=sticks[j])
            {
                l-=sticks[j];
                used[j] = 1;
                if(dfs(j,l,t)) return true;
                l+=sticks[j];used[j] = 0;
                if(sticks[j]==l) break;
           }
        }
    }
    return false;
}
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    while(cin>>n&&n)
    {
        int sum = 0;
        for(int i = 0;i<n;++i)
        {
            cin>>sticks[i];
            sum+=sticks[i];
            used[i] = 0;
        }
        sort(sticks,sticks+n,cmp);//�����Ѥj��p�ƦC
        bool flag = false;
        for(len= sticks[0];len<=sum/2;++len)
        {
            if(sum%len==0)
            {
                if(dfs(0,len,sum))//�i�J���j�P�_����O�_���̤p���
                {
                    flag = true;
                    cout<<len<<endl;
                    break;
                }
            }
        }
        if(!flag) cout<<sum<<endl;
    }
    return 0;
}
