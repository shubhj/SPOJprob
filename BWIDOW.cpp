#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int t,n,p,q;
 long long int c[100001],a[100001],b[100001];
 cin>>t;
 while(t--)
 {
    cin>>n;
     for(int i=0;i<n;i++)
         cin>>a[i]>>b[i];
     for(int i=0;i<n;i++)
        c[i]=b[i];
        sort(c,c+n);
     for(int i=0;i<n;i++)
        if(b[i]==c[n-1])
        {
            p=i;
            break;
        }
     for(int i=0;i<n;i++)
        if(b[i]==c[n-2])
        {
            q=i;
            break;
        }
     if(a[p]>=b[q])
     cout<<p+1<<endl;
     else
     cout<<"-1"<<endl;
 }
}


