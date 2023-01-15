#include<bits/stdc++.h>
using namespace std;
long long int length(long long int a)
{
    long long int sum =0;
    for(long long int i= 1;i<=a;i++)
        sum+=i;
    return sum;
}
int main()
{
    int total = 0;
    long long int n= 0, left = length(1), i = 1;
    cin>>total;
    while(total--)
    {
        cin>>n;
        left = length(1);
        if(n>left)
        {
            for(i = 1;i<=70000;i++)
                if(length(i)>=n)
                break;
            cout<<n - length(i - 1)<<endl;
        }
        else if(n == 1)
            cout<<n<<endl;
    }
    return 0;
}
