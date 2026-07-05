#include<stdio.h>
#include<string.h>
void rev(char a[],int s,int e)
{
    while(e>s)
    {
        char c=a[s];
        a[s]=a[e];
        a[e]=c;
        s++;
        e--;
    }
}
int main()
{
    printf("Enter a sentence: ");
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')
    str[len-1]='\0';
       len--;
    rev(str,0,len-1);
    int start=0;
    for(int i=0;i<=len;i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            rev(str,start,i-1);
            start=i+1;
        }
    }
    printf("Reversed string is: %s",str);
}