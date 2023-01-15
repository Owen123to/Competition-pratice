#include<bits/stdc++.h>
using namespace std;
int main()
{
    double T,D,H,h,e;
    while(cin>>T>>D&&T!='E')
    {
        e = 6.11*exp(5417.7530*((1/273.16) - (1/(D+2733.6))));
        h = 0.5555*(e-10.0);
        H = T +h;
        cout<<T<<"  "<<D<< " "<<H;
    }
}
