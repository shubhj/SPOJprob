#include<cstdio>
#include<cmath>
int main()
{
long long int t;
double r,r1,r2,r3,k,k1,k2,k3;
scanf("%lld",&t);
while(t>0)
{
scanf("%lf %lf %lf",&r1,&r2,&r3);
k1=1/r1;
k2=1/r2;
k3=1/r3;
k=2*pow((k1*k2+k2*k3+k1*k3),0.5)+(k1+k2+k3);
r=1/k;
printf("%0.6lf \n",r);
t--;
}
return 0;
}

