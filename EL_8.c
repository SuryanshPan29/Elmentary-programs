#include<stdio.h>
int main()
{
    int year;
    printf("Please enter the year you want to check that it is leap year or not");
    scanf("%d",&year);
if(year%400==0)
    {
        printf("this year is a leap year");
    }
if(year%100==0)
    {
        printf("this is not  a leap year");
    }
if(year%4==0)
    {
        printf("this year is a leap year");

    }
return 0;
}
