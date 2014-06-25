#include<iostream>
using namespace std;
int main()
{
    long long int d,n,m,k;
    scanf("%lld",&d);
    while(d--)
    {
        scanf("%lld",&n);
        scanf("%lld",&k);
        scanf("%lld",&m);
        long long int x,t;
        x=n;t=0;
        while(x<=m/k)
        {
            x=x*k;
            t++;
        }
        printf("%lld\n",t);
    }
}
