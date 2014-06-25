#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int a[t][t],b[t][t],d1,d2,v,ans,aa,cc,q;
    for(int i=0;i<t;i++)
    for(int j=0;j<t;j++)
    cin>>a[i][j];
    for (int i=0;i<t;i++)
    for (int j=0;j<t;j++)
    cin>>b[i][j];
    cin>>q;
    ans=0;
    for(int i=0;i<t;i++)
    {
        aa=cc=0;
        for(int j=0;j<t;j++)
        {aa+=a[j][i];cc+=b[i][j];}
        ans+=aa*cc;
    }
    char c;int x,y;
    while(q--)
    {
        cin>>c>>x>>y>>v;
        if(c=='A')
        {
         d1=v-a[x][y];
         a[x][y]=v;
         for(int i=0;i<t;i++)
            ans+=d1*b[y][i] ;
        }
        else
        {
          d2=v-b[x][y];
          b[x][y]=v;
          for(int i=0;i<t;i++)
            ans+=d2*a[i][x] ;
        }
        cout<<ans<<endl;
    }
}






