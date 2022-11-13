#include <stdio.h>

int main()
{
   int d,m,y;
   int daysinmonth[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int flag = 0;

   printf("Enter the date - DD/MM/YYYY ::  ");
   scanf("%i/%i/%i",&d,&m,&y);

   // leap year checking
   if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
    daysinmonth[1]=29;

   // days in month 
   if (m<13)
   {
      if( d <= daysinmonth[m-1] )
        flag=1;
   }

   if (flag==1)
      printf("It is a valid date\n");
   else
      printf("It's not valid date");
}