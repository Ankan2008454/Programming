//Compress string aaabbcccc==a3b2c4
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter sentence :");
    fgets(a,100,stdin);
    char b[100]={0};
    int k=0;
    int c=0;
    int len=strlen(a);
    if(a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    for(int i=65;i<130;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(a[j]==(char)i)
            {
                c++;
            }
        }
        if(c!=0)
       {b[k]=(char)i;
        k++;
    
        b[k]=c+'0';
        k++;
        c=0;
       }
    }
    if(strlen(b)<len)
    printf("%s",b);
    else
    printf("%s",a);
}