#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    while(cin>>number)
    {
    if(number>=0)
        cout<<(1+number)/2*number<<endl;
    else
        cout<<(1-number)/2*number+1<<endl;
    }
}
