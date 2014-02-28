#include<cstdio>
#include<algorithm>
#define pi 3.141592653589793238462643383279502884
using namespace std;
int main()
{
double ans1,ans2,r,m,n,k;
scanf("%lf %lf",&m,&n);
while(m!=0&&n!=0)
{
r=min(m/2,n/(2*pi+2));
ans1=pi*r*r*m;
r=m/(pi*2);
ans2=pi*r*r*(n-2*r);
k=max(ans1,ans2);
printf("%.3lf\n",k);
scanf("%lf %lf",&m,&n);
}
return 0;
}

