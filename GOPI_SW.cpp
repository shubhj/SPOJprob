#include<cstdio>
long long int a[1000003];
long long m=1000000007;
void rec()
{
    a[2]=2;a[3]=6;
    for(int i=4;i<1000000;i++)
    a[i]=(a[i-1]*(a[i-1]+1))%m;
}
int main()
{
    rec();
    int t,n,k;
    long long ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",a[n]%m);
    }
}
