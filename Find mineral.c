#include<stdio.h>
#include<string.h>
int ans = 0,m = 0,n = 0;
int map[21][21],dist[21][21]; //map路徑資訊,dist各點之間距離
int t[21],list[21];//t寶藏點資訊,list紀錄行徑寶藏與否
void DFS(int now,int find,int len)
{
    if(find == n)
    {
        if(len+dist[now][m]<ans)
        ans = len +dist[now][m];
        return;
    }
    if(len+dist[now][m]>=ans)
    return;
    int i=0,temp =0;
    for(i =0;i<n;i++)
    {
        temp = list[i];
        if(dist[now][t[temp]])
        {
            list[i] = 0;
            DFS(t[temp],find+1,len+dist[now][t[temp]]);
            list[i] = temp;
        }
    }
}
void Floyd()
{
    int i  = 0,j  = 0, k =0;
    for(i =1;i<=m;i++)
    {
        for(j =1;j<=m;j++)
        {
            dist[i][j] = map[i][j];
            if(dist[i][j] == 0)
            dist[i][j] = 99999;
            if(i==j)
            dist[i][j] = 0;
        }
    }
    for(i =1;i<=m;i++)
    for(j =1;j<=m;j++)
    for(k =1;k<=m;k++)
    if(dist[j][i]+dist[i][k]<dist[j][k])
    dist[j][k] = dist[j][i]+dist[i][k];
}
int main()
{
    while(scanf("%d %d",&m,&n) == 2)
    {
        int find = 0,i = 0,j = 0;
        for(i = 0;i<21;i++)
        t[i] = 0;
        for(i = 1;i<=n;i++)
        scanf("%d",&t[i]);
        for(i = 0;i<n;i++)
        list[i] = i+1;
        for(i =0;i<=m;i++)
        for(j =0;j<=m;j++)
        dist[i][j]  = 0;
        for(i = 1;i<=m;i++)
            for(j = 1;j<=m;j++)
            scanf("%d",&map[i][j]);
        Floyd();
        for(i = 0;i<n;i++)
        {
            if(t[i] == 1)
            {
                t[i] = 0;
                find++;
            }
        }
        ans = 99999;
        DFS(1,find,0);
        printf("%d\n",ans);
    }
    return 0;
}