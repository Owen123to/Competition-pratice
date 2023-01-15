#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int number;
    cin>>number;
    while(number--)
    {
        vector<int> house;
        int n = 0,temp = 0;
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>temp;
            house.push_back(temp);
        }
        sort(house.begin(),house.end());
        int mid = house[n/2];
        int sum = 0;
        for(int i = 0;i<n;i++)
            sum+=abs(mid - house[i]);
        cout<<sum<<endl;
    }
    return 0;
}