#include<stdio.h>
struct car
{
   int fuel;
   int seat;
   int mileage;
};
int main()
{
   struct car c[2];
   for(int i=0;i<2;i++)
   {
      printf("Enter car %d fuel:",i+1);
      scanf("%d",&c[i].fuel);
      printf("Enter car %d seat:",i+1);
      scanf("%d",&c[i].seat);
      printf("Enter car %d mileage:",i+1);
      scanf("%d",&c[i].mileage);
   }
   for(int i=0;i<2;i++)
   {
      printf("details of car %d",(i+1));
      printf("fuel %d",c[i].fuel);
       printf("fuel %d",c[i].seat);
printf("fuel %d",c[i].mileage);

   } 
}