#include<cstdio>
int main()
{
int t;
long long a[10],i,f,l,sum,n,d;
scanf("%d",&t);
while(t>0)
{
    scanf("%lld%lld%lld",&f,&l,&sum);
    n=sum*2/(f+l);
    printf("%lld\n",n);
    d=(l-f)/(n-5);
    for(int i=0;i<n;i++)
    {
        a[i]=(f+(i-2)*d);
        printf("%lld ",a[i]);
    }
    printf("\n");
t--;
}
return 0;
}

