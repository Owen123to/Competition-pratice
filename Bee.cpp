#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =0;
    while(cin>>n&&n!=-1)
    {
        long long int  male = 0, female = 1;
        for(int i = 1;i<=n;i++)
        {
            long long  int c = 1+male, d = male + female;
            female = c;
            male = d;
        }
        cout<<male<<" "<<male+female<<endl;
    }
    return 0;
}
