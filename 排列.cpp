#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0,n =0,k = 0;
    cin>>sum;
    while(sum--)
    {
        cin>>n>>k;
        int aa[n];
        for(int i= 0;i<n;i++)
            cin>>aa[i];
            while(k--)
                next_permutation(aa,aa+n);
        for(int i= 0;i<n-1;i++)
            cout<<aa[i]<<" ";
        cout<<aa[n]<<endl;
    }
}
