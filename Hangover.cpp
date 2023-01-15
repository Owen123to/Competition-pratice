#include<bits/stdc++.h>
using namespace std;
const int maxn = 300;
int main()
{
    double length,numbers[maxn];
    int total;
    cin>>length;
    numbers[0] = 0.0;
    for(total = 1;numbers[total-1] < 5.20;total++)
        numbers[total] = numbers[total-1] + 1.0/double(total+1);
    while(length!=0)
    {
        int l = 0,r = total,mid;
        while(1+l<r)
        {
            mid = (l+r)/2;
            if(numbers[mid]>length)
                r=mid;
            if(numbers[mid]<length)
                l=mid;
        }
        cout<<r<<" card(s)"<<endl;
        cin>>length;
    }
}
