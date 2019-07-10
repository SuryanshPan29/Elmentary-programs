#include<stdio.h>
int main()
{
    int number;
    printf("Please enter the number here:-");
    scanf("%d",&number);
    if(number<1 || number>99)
    {
        printf("Please specify a number greater than 0 and less than 100.");
    }
    else
    {
        printf("thanks a lot");
    }
}
