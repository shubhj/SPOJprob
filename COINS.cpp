#include<cstdio>
long long int a[1000001]={0};
long long int max(long long int );
int main()
{
long long int n,k;
while((scanf("%lld",&n))!=EOF)
{
    k=max(n);
    printf("%lld\n",k);
}
return 0;
}
long long int max(long long int x)
  {
    if(x<12)
    return x;
    else
    {
        if(x<1000001&&a[x]!=0)
        return a[x];
        else if(x<1000001)
        {
            a[x]=max(x/2)+max(x/3)+max(x/4);
            return a[x];
        }
       else
       return (max(x/2)+max(x/3)+max(x/4));
    }
   }

