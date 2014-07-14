#include<cstdio>
int main()
{
    int  t;
    scanf("%d",&t);
    long long int a[t],ans,k;
    for(int i=0;i<t;i++)
    scanf("%lld",&a[i]);
    ans=0;k=0;
    for(int i=t-1;i>0;i--)
    {
        k=k|a[i];
        ans=ans|(a[i-1]^k);
    }
    printf("%lld\n",ans);
}

