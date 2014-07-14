#include<cstdio>
int main()
{
    int t,p;long long n,k,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%d",&p);
        k=n/p;ans=n%p+1;
        while(k>0)
        {
            ans=ans*((k%p)+1);
            k=k/p;
        }
        printf("%lld\n",n+1-ans);
    }
}

