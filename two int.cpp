#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    while(cin>>num&&num!=0)
    {
        string s = "";
        int sum = 0;
        while(num>0)
        {
            s = to_string(num%2)+s;
            if(num%2==1) sum++;
            num/=2;
        }
        cout<<s<<" "<<sum<<endl;
    }
    return 0;
}