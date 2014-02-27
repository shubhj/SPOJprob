#include<cstdio>
int main()
{
	int a1 ,a2,a3,a4;
	scanf("%d",&a1);
	scanf("%d",&a2);
    scanf("%d",&a3);
	while(a1!=0 || a2!=0 ||a3!=0)
	{
		if(a1-a2==a2-a3)
		{
			printf("AP ");
			a4=a1+3*(a2-a1);
			printf("%d \n",a4);
		}
		else
		{
			printf("GP ");
			a4=a3*(a2/a1);
			printf("%d  \n",a4);
		}
	 scanf("%d",&a1);
	scanf("%d",&a2);
    scanf("%d",&a3);
    }
    return 0;
}

