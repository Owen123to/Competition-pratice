#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793
int main()
{
    long  double aa[2] ,bb[2] ,cc[2] ;
    long double dd = 0.0 ,ee = 0.0 ,ff = 0.0, gg = 0.0,hh = 0.0;
    while(cin>>aa[0]>>aa[1]>>bb[0]>>bb[1]>>cc[0]>>cc[1])
    {
        dd = sqrt(pow(bb[0] - aa[0],2)  + pow(bb[1] - aa[1],2));
        ee = sqrt(pow(cc[0] - aa[0],2) + pow(cc[1] - aa[1],2));
        ff = sqrt(pow(cc[0] - bb[0],2) + pow(cc[1] - bb[1],2));
        hh = (dd+ee+ff)/2;
        gg = sqrt(hh*(hh-dd)*(hh-ee)*(hh-ff));
        cout<<fixed<<setprecision(2)<<ff/(2*gg/dd/ee)*PI<<endl;
    }
    return 0;
}
