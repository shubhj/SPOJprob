#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int e,e1,f,f1,s,s1,m,m1,sum=0,sum1,sum2,sum3,sum4;
    scanf("%d",&e);
    scanf("%d",&f);
    scanf("%d",&s);
    scanf("%d",&m);
    scanf("%d",&e1);
    scanf("%d",&f1);
    scanf("%d",&s1);
    scanf("%d",&m1);
    sum=e+e1+f+f1+s+s1+m+m1;
    while(sum>-8 )
    {
        if(e%e1==0)
        sum1=e/e1;
        else
        sum1=e/e1+1;
        if(f%f1==0)
        sum2=f/f1;
        else
        sum2=f/f1+1;
        if(s%s1==0)
        sum3=s/s1 ;
        else
        sum3=s/s1+1;
        if(m%m1==0)
        sum4=m/m1 ;
        else
        sum4=m/m1+1;
        sum=max(sum1,max(sum2,max(sum3,sum4)));
        e=e1*sum-e;
        f=f1*sum-f;
        s=s1*sum-s;
        m=m1*sum-m;
        printf("%d %d %d %d\n",e,f,s,m);
        scanf("%d",&e);
        scanf("%d",&f);
        scanf("%d",&s);
        scanf("%d",&m);
        scanf("%d",&e1);
        scanf("%d",&f1);
        scanf("%d",&s1);
        scanf("%d",&m1);
        sum=e+e1+f+f1+s+s1+m+m1;
    }
}

