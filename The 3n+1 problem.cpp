#include<bits/stdc++.h>
using namespace std;
int main()
{
    int left = 0,right = 0;
    while(cin>>left>>right&&left!=0&&right!=0)
    {
        int max = 0;
        for(int j = left;j<=right;j++)
        {
            int i =j,index = 1;
            while(i!=1)
            {
                if(i%2!=0)
                    i = 3*i+1;
                else
                    i = i/2;
                    index++;
            }
            if(index>max)
                max = index;
        }
        cout<<left<<" "<<right<<" "<<max<<endl;
    }
    return 0;
}
