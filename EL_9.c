#include<stdio.h>
#include<conio.h>
 int leapyear(int year)
{
   int flag;
        if(year%400==0)
            {
               flag=1;
            }
        if(year%100==0)
            {
                flag=0;
            }
        if(year%4==0)
            {
                flag=1;

            }
    return flag;
}
int main()
{
    int year,result;
    for(year=2018;year<=2200;year++)
     {
         result=leapyear(year);
         if(result==1)
         {
             printf("%d\n",year);
         }
     }
     return 0;
}
