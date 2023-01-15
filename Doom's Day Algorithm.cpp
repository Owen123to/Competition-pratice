#include<iostream>
using namespace std;
int main()
{
    int num = 0;
    char s[7][10] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>num;
    while(num--)
    {
        int month,day;
        cin>>month>>day;
        int w = 5;
        for(int i = 1;i<month;i++)
            w+=days[i-1];
        w = (w+day)%7;
        cout<<s[w]<<endl;
    }   
    return 0;
}