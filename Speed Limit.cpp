#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total = 0;
    cin>>total;
    while(total!=-1)
    {
        int speed = 0, time = 0,sum = 0 , pre_time = 0;
        for(int i = 0;i<total;i++)
        {
            cin>>speed>>time;
            sum+=speed*(time - pre_time);
            pre_time = time;
        }
        cout<<sum<<" miles"<<endl;
        cin>>total;
    }
    return 0;
}
