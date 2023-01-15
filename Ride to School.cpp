#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =0;
    const double distance = 4.5;
    cin>>n;
    while(n)
    {
        double end_time = 1e100,temp = 0.0,speed = 0.0, time = 0.0;
        for(int i= 0;i < n;i++)
        {
            cin>>speed>>time;
            if(time>=0 && (temp = distance*3600/speed+time) <end_time)
                end_time = temp;
        }
        cout<<ceil(end_time)<<endl;
        cin>>n;
    }
    return 0;
}

