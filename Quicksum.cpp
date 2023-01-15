#include<bits/stdc++.h>
using namespace std;
int main()
{
    string aa;
    getline(cin,aa);
    while(aa!="#")
    {
        int sum=0;
        for(int i = 0;i < aa.size();i++)
            if(aa[i]>='A' && aa[i] <= 'Z')
                sum+=(aa[i] - 'A'+1)*(i+1);
            cout<<sum<<endl;
            getline(cin,aa);
    }
}
