#include<stdio.h>
int main()
{
    float fahr,celsius;
    printf("Please enter the temp in fahrenheit for which you want temp in the celsius \n");
    scanf("%f",&fahr);
    celsius=(5.0/9.0)*(fahr-32.0);
    printf("%f",celsius);
}

