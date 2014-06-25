#include<cstdio>
long long int gcd(long long int a,long long int b)
{
     while ( b != 0) {
        long long int r = a%b;
        a= b;
        b= r;
    }
    return a;
}
int main()
{
    long long int t,a,b,c,max,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a ,&b ,&c);
        if(a>b)
        max=a;
        else
        max=b;
        if(max<c)
        printf("NO\n");
        else
        {
            p=gcd(a,b);
            a=a/p;
            b=b/p;
            if(c%p==0)
            printf("YES\n");
            else
            printf("NO\n");
        }
    }

}
