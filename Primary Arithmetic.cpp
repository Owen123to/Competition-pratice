#include<iostream>
using namespace std;
int  input(int temp1,int temp2[])
{
    int count = 0;
    while(temp1!=0)
    {
        temp2[count] = temp1%10;
        count++;
        temp1/=10;
    }
    return count;
}
int main()
{
    int a = 0,b = 0;
    while(cin>>a>>b && (a!=0||b!=0))
    {
        int aa[20] = {};
        int bb[20] = {};
        int cc[21] = {};
        int lengtha = input(a,aa);
        int lengthb = input(b,bb);
        int top = max(lengtha,lengthb);
        int count1 = 0;
        for(int i = 0;i<top;i++)
        {
            cc[i] = aa[i]+bb[i];
            if(cc[i]>=10)
            {
                cc[i]-=10;
                count1++;
                cc[i+1]++;
            }
        }
        if(count1 == 0)
        cout<<"NO carry operation."<<endl;
        else if(count1 == 1)
        cout<<"1 carry operation."<<endl;
        else
        cout<<count1<<" carry operation."<<endl;
    }
    return 0;
}
