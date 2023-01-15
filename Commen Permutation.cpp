#include<iostream>
using namespace std;
int main()
{
    string a = "",b = "";
    while(cin>>a)
    {
        int count_a[123] = {0},count_b[123] = {0};
        for(int i = 0;i< a.size();i++)
            count_a[a[i]]++;
        cin>>b;
        for(int i = 0;i<b.size();i++)
            count_b[b[i]]++;
        for(int j = 97;j<123;j++)
        {
            int k= 0;
            while(k<count_a[j]&&k<count_b[j])
            {
                cout<<(char)j;
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}