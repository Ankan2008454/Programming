#include<stdio.h>
#include<string.h>

int* anagram1(char b[], int s, int e)
{
    static int c[200] = {0};

    for(int j = s; j <= e; j++)
    {
        c[(int)b[j]]++;
    }

    return c;
}

int* anagram2(char b[], int s, int e)
{
    static int c[200] = {0};

    for(int j = s; j <= e; j++)
    {
        c[(int)b[j]]++;
    }

    return c;
}

int main()
{
    printf("Enter sentence1: ");
    char a[100];
    fgets(a, 100, stdin);

    printf("Enter sentence2: ");
    char b[100];
    fgets(b, 100, stdin);

    int l = strlen(a);
    int l1 = strlen(b);

    if(a[l-1] == '\n')
    {
        a[l-1] = '\0';
        l--;
    }

    if(b[l1-1] == '\n')
    {
        b[l1-1] = '\0';
        l1--;
    }

    int s = 0;

    int *fa = anagram1(a, s, l-1);
    int *fb = anagram2(b, s, l1-1);

    int c = 0;

    for(int i = 0; i < 200; i++)
    {
        if(fa[i] == fb[i])
            c++;
    }

    if(c == 200)
        printf("The strings are anagrams");
    else
        printf("The strings are not anagrams");

    return 0;
}
 


