#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100][101];
    int len[100],max = 0,num = 0;
    for(int i = 0;i<100;i++)
    {
        for(int j = 0;j<101;j++)
            s[i][j] = 0;
        len[i] = 0;
    }
    while(cin.getline(s[num],101))
    {
        len[num] = strlen(s[num]);
        if(len[num]>max)
        max = len[num];
        for(int add = len[num];add<=max;add++)
        {
            s[num][add] = ' ';
            len[num]++;
        }
        num++;
    }
    for(int i = 0;i<max;i++)
    {
        for(int j = num-1;j>=0;j--)
        {
            if(i<len[j])
            cout<<s[j][i];
        }
        cout<<endl;
    }
    return 0;
}
