#include<bits/stdc++.h>
using namespace std;
#define maxyear 1999
class calender
{
public:
    int day,month,mark;
    string scene;
    calender():day(0),month(0),mark(0),scene(NULL){}
};
deque <calender> party;
bool cmp(const calender&a,const calender &b)
{
    if(a.month>b.month)
        return true;
    else if(a.month==b.month&&a.day>b.month)
    return true;
    else if(a.month==b.month&&a.day==b.day&&a.mark<b.mark)
    return true;
    else
        return false;
}
int main()
{
    int year = 0, today_day  = 0,today_month = 0;
    cin>>year;
    calender temp;
    char tag = 0;
    cin>>tag;
    while(tag!='#')
    {
        if(tag == 'A')
        {
            cin>>temp.day>>temp.month>>temp.mark;
            getline(cin,temp.scene);
            party.push_back(temp);
        }
        else
        cin>>today_day>>today_month;
        cin>>tag;
    }
    cout<<"Today is:"<<today_day<<today_month<<endl;
    sort(party.begin(),party.end(),cmp);
    for(deque<calender>::iterator iter = party.begin();iter!= party.end();++iter)
    {
        if(iter->month==today_month&&iter->day==today_day)
            cout<<iter->day<<" "<<iter->month<<" *TODAY* "<<iter->scene;
        else
        {
            int sum = 0;
            cout<<iter->day<<" "<<iter->month;
            for(int i = today_month, j = today_day;i!=iter->month&&j!=iter->day;)
            {
                switch(i)
                {
                    case 1:
                }
            }
        }
    }
    return 0;
}
