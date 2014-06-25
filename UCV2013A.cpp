#include<cstdio>
long long int mod=1000000007;
long long int ans(long long int n,long long int l)
{
    long long int k=1,j=0,s=0;
    while(j<l)
    {
        k=(n*k)%mod;
        s=(s+k)%mod;
        j++;
    }
    return s;
}
int main()
{
    long long int n,l;
    scanf("%lld %lld",&n,&l);
    while(n!=0 && l!=0)
    {
        if(n==1)
        printf("%lld\n",l);
        else
        printf("%lld\n",ans(n,l));
        scanf("%lld %lld",&n,&l);
    }
}

