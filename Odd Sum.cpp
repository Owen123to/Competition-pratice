#include<iostream>
using namespace std;
int main()
{
    int num = 0,sum = 0,a = 0,b = 0,index = 0,n = 0;
    cin>>num;
    while(num--)
    {
        index++;
        cin>>a>>b;
        if(a%2 == 0) a++;
        if(b%2 == 0) b--;
        n = (b-a)/2+1;
        sum = (a+b)*n/2;
        cout<<"Case "<<index<<": "<<sum<<endl;
    }
    return 0;
}