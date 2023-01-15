#include<bits/stdc++.h>
using namespace std;
const int limit = 100000000;
int main()
{
    int n = 0,aa[1500],total = 0;
    for(int i = 1;i<=limit;i*=2)
        for(int j= 1;i*j<=limit;j*=3)
            for(int k= 1;i*j*k<=limit;k*=5)
                aa[total++] = i*j*k;
        for(int i= 1;i< total;i++)
            for(int j = 0;j < total -i;j++)
            if(aa[j] > aa[j+1])
        {
            int temp = aa[j+1];
            aa[j+1] = aa[j];
            aa[j] =temp;
        }
    cin>>n;
    while(n)
    {
        cout<<aa[n-1]<<endl;
        cin>>n;
    }
    return 0;
}
