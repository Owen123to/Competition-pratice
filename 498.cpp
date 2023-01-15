#include<iostream>
#include<cstdlib>
using namespace std;
int a[1000000];
int derive(int x,int max)
{
    long long  sum = 0,exp =1;
    for(int i = max-1;i>=0;i--)
    {
        sum+=a[i]*exp*(max-i);
        exp*=x;
    }
    return sum;
}
int main()
{
    int x = 0,n = 0;
    while(cin>>x)
    {
        for(n = 0;;n++)
        {
            cin>>a[n];
            if(getchar() == '\n') break;
        }
        cout<<derive(x,n);
    }
    return 0;
}