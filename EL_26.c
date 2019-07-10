#include<stdio.h>
int main()
{
    float farh,calsius;
    printf("Please enter the temp in calsius for which you want temp in the farh \n");
    scanf("%f",&calsius);
    farh=((9.0/5.0)*calsius)+32;
    printf("%f",farh);
}
