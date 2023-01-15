#include<iostream>
using namespace std;
int main()
{
    int num = 0;
    cin>>num;
    for(int i = 1;i<=num;i++)
    {
        int size,matrix[100][100] = {0};
        string a[2];
        cin>>a[0]>>a[1]>>size;
        for(int j = 0;j<size;j++)
        {
            for(int k = 0;k<size;k++)
            {
                cin>>matrix[j][k];
            }
        }
        bool index = true;
        for(int j =0;j<size;j++)
        {
            for(int k = 0;k<size;k++)
            {
                if(matrix[j][k]!=matrix[size-1-j][size-1-k])
                index = false;
            }
        }
        if(index == true) cout<<"Test #"<<i<<" : Symmetric.";
        else cout<<"Test #"<<i<<" : Non-Symmetric.";
    }
    return 0;
}