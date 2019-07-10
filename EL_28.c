#include<stdio.h>
int main()
{
    float fahr,celsius;
    printf("Please enter the temp in calsius for which you want temp in the farh \n");
    while(celsius<=50)
    {
    fahr=((9.0/5.0)*celsius)+32;
    printf("%3.0f %8.2f \n",celsius,fahr);
    celsius+=5;
    }
}

