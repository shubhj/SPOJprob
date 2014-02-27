#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
int t,n,x,i;
double b[10000],sum,p;
char a[100];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%s %lf",a,&b[i]);
x=0;
sort(b,b+n);
sum=b[n-1]-b[0];
for(int i=1;i<n;i++)
{
p=360-b[i]+b[i-1];
sum=min(p,sum);
}
p=(ceil)(sum*12.0);
printf("%d\n",(int)p);
}}

