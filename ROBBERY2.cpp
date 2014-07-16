#include<cstdio>
#include<cmath>
int main()
{
    long long int t,c,n,a[101],d; int k,j;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %d",&c,&k);
        n=(sqrt((1+8*c)*1.0)-1)/(2*k);
        d=c-(n*k*(n*k+1))/2;
        for(int i=0;i<k;i++)
        {
            a[i]=k*(n*(n-1))/2+(i+1)*n;
        }
        j=0;
        while(d>0)
        {
            if(d>n*k+j+1)
            {
                a[j]+=n*k+j+1;
                d=d-n*k-j-1;
            }
            else
            {
                a[j]+=d;
                d=0;
            }
            j++;
        }
        for(int i=0;i<k;i++)
        printf("%lld ",a[i]);
        printf("\n");
    }
}

