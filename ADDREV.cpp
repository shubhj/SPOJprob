#include<cstdio>
int r(int );
int main()
{
int t,n1,n2,k;
scanf("%d",&t);
while(t>0)
{
scanf("%d \t %d",&n1,&n2);
k=r(n1)+r(n2);
printf("%d \n",r(k));
t--;
}
return 0;
}
int r(int x)
{
int p=0;
while(x%10==0)
x=x/10;
while(x>0)
{
p=x%10+p*10;
x=x/10;
}
return p;
}

