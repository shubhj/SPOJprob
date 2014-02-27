#include<cstdio>
#include<cmath>
int main()
{
	long long int a,b,c,d,i,t;
	scanf("%lld",&t);
	while(t--)
	{
         scanf("%lld",&a);
		 b=(long long int)ceil((sqrt(8*a-7)-1)/2.0);
		 printf("%lld\n",b);
		}
}

