#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0,d = 0;
    while(cin>>n>>d&&n!= 0&&d!=0)
    {
        int student[n][2];
        for(int i = 0;i<n;i++)
        for(int j = 0;j < 2;j++)
            student[i][j] = 1;
        while(d--)
        {
            for(int i = 0;i<n;i++)
            {
                cin>>student[i][0];
                if(!student[i][0])
                    student[i][1] = 0;
            }
        }
        int index = 0;
        for(int i = 0;i<n;i++)
            if(student[i][1])
                index = 1;
        if(index)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    return 0;
}
