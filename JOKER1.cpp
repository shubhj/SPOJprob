#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,n,ans,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=1000000007;
        long long int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        ans=a[0];
        for(int i=1;i<n;i++)
        {
            //cout<<ans<<"    ";
            ans=(ans*(a[i]-i))%m;
        }
        printf("%lld\n",ans);
    }
    printf("KILL BATMAN\n");
}

