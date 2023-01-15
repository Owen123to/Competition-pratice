#include<bits/stdc++.h>
using namespace std;
int main()
{
     int teams = 0;
    cin>>teams;
    int teams_time[teams][8]= {0},time[teams][2] = {0};
     char  teamslag[teams][100];
    for(int i = 0;i<teams;i++)
    {
        cin>>teamslag[i];
        for(int j = 0;j < 8;j++)
        {
            cin>>teams_time[i][j];
            if(j%2!=0 && teams_time[i][j]!=0)
            {
                time[i][0] ++;
                time[i][1] += ((teams_time[i][j-1] -1)*20+teams_time[i][j]);
            }
        }
    }
    int max = time[0][0],index = 0;
    for(int i = 0 ;i<teams;i++)
    {
        if(time[i][0]>max)
        {
            max = time[i][0];
            index = i;
        }
        else if(time[i][0] == max && time[i][1]<time[index][1])
            index = i;
    }
    cout<<teamslag[index]<<" "<<time[index][0]<<" "<<time[index][1];
    return 0;
}
