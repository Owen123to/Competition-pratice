#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int main()
{
    int sum,year;
    double x,y,result;
    cin>>sum;
    while(sum--)
    {
        cin>>x>>y;
        result = (x*x+y*y)*PI/2/50;
        year = ceil(result);
        cout<<year<<endl;
    }
}
