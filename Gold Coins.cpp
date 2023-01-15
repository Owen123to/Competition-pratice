#include<bits/stdc++.h>
using namespace std;
int  day_check(int n)
{
    int sum =0;
    for(int i = 1;sum<=n;i++)
    {
        if(sum+i>n)
            return i-1;
        sum+=i;
    }
}

int main()
{
    int day = 0;
    while(cin>>day&&day!= 0)
    {
        int total = 0,index = 0;
        for(int i = 1;i<=day_check(day);i++)
        total+=i*i;
        for(int i = 1;i<=day_check(day);i++)
            index+=i;
        total+=(day-index)*(day_check(day)+1);
        cout<<day<<" "<<total<<endl;
    }
    return 0;
}
