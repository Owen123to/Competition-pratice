#include<iostream>
using namespace std;
int main()
{
    int down,top,s[100001] = {0};
    for(int i = 1;i*i<100001;i++) s[i*i] = 1;
    for(int i = 1;i<100001;i++) s[i]+=s[i-1];
    while(cin>>down>>top&&top!=0&&down!=0)
        cout<<s[top]-s[down]+1<<endl;
    return 0;
}