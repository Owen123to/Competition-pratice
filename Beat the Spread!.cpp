#include<iostream>
using namespace std;
int main()
{
    int num = 0;
    cin>>num;
    while(num--)
    {
        int sum,gap,a,b;
        cin>>sum>>gap;
        a = (sum+gap);
        if(a%2) {cout<<"impossible\n";continue;}
        a/=2;
        b = sum -a;
        if(b<0) cout<<"impossible\n";
        else cout<<a<<" "<<b<<endl;
    }
    return 0;
}