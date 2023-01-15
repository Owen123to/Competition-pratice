#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> count;
    map<string,int>::iterator it;
    int n = 0;
    string first;
    char others[76] ={0};
    cin>>n;
    cin.ignore();
    while(n--)
    {
        cin>>first;
        count[first]++;
        cin.getline(others,76);
    }
    for(it = count.begin();it!=count.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
