#include<iostream>
using namespace std;
int main()
{
    long long num = 0,day = 0;
    while(cin>>num>>day)
    {
        long long sum = 0.0;
        for(long long i = 0;;i++)
        {
            sum = (num+num+i)*(i+1)/2;
            if(sum>=day)
            {
                cout<<num+i<<endl;
                break;
            }
        }
    }
    return 0;
}