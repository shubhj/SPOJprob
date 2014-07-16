#include<cstdio>
long long a[1000003];
void ac()
{
    long long int k,n,p;
    k=2;
    a[1]=1;a[2]=2;
    for(int i=3;i<1000001;)
    {
        n=a[k];p=i-1;
        while(n--)
        {
            a[i]=a[p]+1;
            i++;
        }
        k++;
    }
}
int main(){
    ac();
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("Case #%d: %lld\n",i,a[n]);
    }
}
