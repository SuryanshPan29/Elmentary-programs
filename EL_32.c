#include<stdio.h>
#include<math.h>
int main()
{
    double principle,time,year,rate;
    double temp,temp2,amount;
    printf("Please enter the principle--time--year--rate--here\n");
    scanf("%lf%lf%lf%lf",&principle,&time,&year,&rate);
    temp=1+(rate/time);
    temp2=pow(temp,year);
    amount=principle*temp2;
    printf("%lf",amount);
    return 0;

}
