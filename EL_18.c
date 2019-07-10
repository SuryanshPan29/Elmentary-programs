#include<stdio.h>
int main()
{
    int reverse=0,number;
    printf("Please enter the number");
    scanf("%d",&number);
    while(number != 0 )
    {
        reverse=reverse*10;
        reverse=reverse + number%10;
        number=number/10;
    }
    printf("reverse is %d",reverse);
    printf("the diffrence is %d",number-reverse);

}
