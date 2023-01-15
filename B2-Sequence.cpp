#include<iostream>
#include<map>
using namespace std;
int main()
{
    int num = 0,in = 0,p = 0,index_te = 0;
    map<int,int> digit;
    pair<map<int,int>::iterator,bool> index;
    while(cin>>num)
    {
        digit.clear();
        in++;
        int number[num] = {0};
        for(int i = 0;i<num;i++)
        {
            cin>>number[i];
            if(number[i]<=number[i-1])
            {
                cout<<"Case #"<<in<<": It is not a B2-Sequence."<<endl;
                index_te = 1;
            }
        }
        if(index_te == 1) continue;
        for(int i = 0;i<num;i++)
        {
            for(int j = i;j<num;j++)
            {
                index = digit.insert(pair<int,int>(number[i]+number[j],1));
                if(index.second != true)
                {
                    cout<<"Case #"<<in<<": It is not a B2-Sequence."<<endl;
                    i = j = num;
                    p = 1;
                }
            }
        }
        if(p == 0)
        cout<<"Case #"<<in<<": It is  a B2-Sequence."<<endl;
    }
    return 0;
}