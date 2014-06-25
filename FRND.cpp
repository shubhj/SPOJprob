#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m,b[30]={0},temp,k,sum;
    cin>>t;
    if(t==1)
    {
        cin>>temp;
        n=temp;
    }
    else
    {
        n=0;
        m=t;
        while(t--)
        {
            cin>>temp;
            for(int i=0;i<20;i++)
            {
                if(temp%2==1)
                b[i]++;
                temp/=2;
            }
        }
        k=1;
        for(int i=0;i<20;i++)
        {
            n+=b[i]*(m-b[i])*k;k=k*2;
        }

    }
    cout<<n<<endl;
}

