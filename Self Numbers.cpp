#include<bits/stdc++.h>
using namespace std;
#define maxn 10000
unsigned g[maxn];
unsigned sum_of_digit(unsigned n)
{
    if(n<10)
        return n;
    else
        return (n%10)+sum_of_digit(n/10);
}
void generation_self_number(unsigned n)
{
    while(n<maxn)
    {
        unsigned next = n+sum_of_digit(n);
        if(next>maxn||g[next]!=next)
            return ;
        g[next] = n;
        n = next;
    }
}
int main()
{
    unsigned n;
    for(n =0;n<maxn;n++)
    g[n] = n;
    for(n =1;n < maxn;n++)
    generation_self_number(n);
    for(n =1;n<maxn;n++)
            if(g[n] == n)
            cout<<n<<endl;
    return 0;
}
