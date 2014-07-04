#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int wa=0,ba=0,ra=10,w,b,r; char c[2];int i=0,firstteam=2;
    while(scanf("%s",c)!=EOF)
    {
                while(c[0]!='#')
                {
                    scanf("%d %d %d",&w,&b,&r);
                    wa+=w;
                    ba+=b;
                    if(i==0 &&(c[0]=='A' || c[0]=='C'))
                    firstteam=1;
                    i=1;
                    if(r==1 )
                    {
                            if(c[0]=='A'|| c[0]=='C')          ra=0;
                            if(c[0]=='B'||c[0]=='D')            ra=1;
                    }
                    scanf("%s",c);
                }
                     if((wa)==9 &&(ra!=10))
                     {
                         if(firstteam==1)
                         printf("Team-1 win and the point is %d.\n",wa-ba+((ra+1)%2)*5);
                         else
                         printf("Team-2 win and the point is %d.\n",wa-ba+((ra)%2)*5);
                     }
                     else if((ba)==9 && (ra!=10))
                    {
                         if(firstteam==2)
                         printf("Team-1 win and the point is %d.\n",ba-wa+((ra+1)%2)*5);
                         else
                         printf("Team-2 win and the point is %d.\n",ba-wa+((ra)%2)*5);
                     }
                     else
                     printf("Incomplete game.\n");
                     firstteam=2;
                     i=0;wa=ba=0;
                     ra=10;
    }
}
