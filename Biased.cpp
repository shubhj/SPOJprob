#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
char a[100001];
long long int t,n,sum;
scanf("%lld",&t);
printf("\n");
while(t--)
{
    printf("\n");
sum=0;
scanf("%lld",&n);
int b[n];
for(long long int i=0;i<n;i++)
{
scanf("%s %lld",a,&b[i]);
}
sort(b,b+n);
for(long long int i=0;i<n;i++)
sum+=abs(b[i]-i-1);
printf("%lld\n",sum);
}
return 0;
}

