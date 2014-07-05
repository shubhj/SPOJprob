#include<cstdio>
#include<cstring>
int main()
{
    char str[100002];
    while(scanf("%s",str)!=EOF)
    {
        int len,i,count;
        char ch;
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            count=1;ch=str[i];
            while(str[i+1]==ch && (1+i)<len)
            {
                count++;i++;
            }
            if(count>3)
            printf("%d!%c",count,ch);
            else
            for(int p=0;p<count;p++)
            printf("%c",ch);
        }
        printf("\n");
    }
}
