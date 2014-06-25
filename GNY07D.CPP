#include<iostream>
#include<cstdio>
using namespace std;
char p[10001010],q[100][100];
void con(char* aa,int r ,int c)
{
    int p=0;
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {
        q[i][j]=aa[p];
        p++;
    }
}
void spiral(int m, int n, char a[100][100] )
{
    int i, k = 0, l = 0,t=0;;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
           {p[t]=a[k][i];t++;}
        k++;
        for (i = k; i < m; ++i)
            {p[t]=a[i][n-1];t++;}
        n--;
        if ( k < m){
            for (i = n-1; i >= l; --i)
                {p[t]=a[m-1][i];t++;}
            m--;
        }
        if (l < n){
            for (i = m-1; i >= k; --i)
                {p[t]=a[i][l];t++;}
            l++;
        }
    }
}
int contoint(char a[],int e)
{
    int s=0,k=1;
    for(int i=e;i>e-5;i--)
    {
        if(a[i]=='1')
        s=s+k;;
        k*=2;
    }
    return s;
}
int main()
{
    int t,r,c,e=0,x,d;
    cin>>t;
    char shubhi[27]={' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    while(e<t)
    {
        e++;
        cin>>r>>c;
        char a[r*c];
        scanf("%s",a);con(a,r,c);spiral(r,c,q);
        x=((r*c)/5)*5;
        int i=4;
        cout<<e<<" ";
        while(i<x)
        {
            cout<<shubhi[contoint(p,i)];
            i=i+5;
        }cout<<endl;
    }
    return 0;
}

