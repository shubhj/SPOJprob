#include<cstdio>
int main()
{
int t;
long long s,r,n;
scanf("%d",&t);
while(t>0)
{
scanf("%lld",&n);
if(n==1)
s=2;
else
s=2+(n-1)*(3*n+4)/2;
r=s%1000007;
printf("%lld \n",r);
t--;
}
return 0;
}

