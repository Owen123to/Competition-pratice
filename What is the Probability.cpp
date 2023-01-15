#include<iostream>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
    int num = 0,n = 0,i = 0;
    double p = 0.0,pi = 0.0;
    cin>>num;
    while(num--)
    {
        cin>>n>>p>>i;
        if(p<0.00001)
        cout<<"0.0000\n";
        else 
        {
            pi = pow(1-p,i-1)*p/(1-pow(1-p,n));
            cout<<fixed<<setprecision(4)<<pi<<endl;
        }
    }
    return 0;
}
