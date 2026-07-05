/*1 2  3  4 5  6
20 21 22 23 24 7
19 32 33 34 25 8
18 31 36 35 26 9
17 30 29 28 27 10
16 15 14 13 12 11*/
using namespace std;
#include<iostream>
int main()
{
   int n;
   cin>>n;
   int top=0;
   int left=0;
   int bottom=n-1;
   int right=n-1;
   int b[n][n];
   int c=1;
   while(top<=bottom&&left<=right)
   {
       for(int i=left;i<=right;i++)
       {
            b[top][i]=c;
            c++;
       }
       top++;
       for(int i=top;i<=bottom;i++)
       {
            b[i][right]=c;
            c++;
       }
       right--;
       if(top<+bottom)
       {for(int i=right;i>=left;i--)
       {
            b[bottom][i]=c;
            c++;
       }
       bottom--;
    } 
    if(left<=right)
    {
       for(int i=bottom;i>=top;i--)
       {
            b[i][left]=c;
            c++;
       }
       left++;
    }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<b[i][j]<<" ";
       }
       cout<<"\n";
   }
}