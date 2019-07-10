#include<stdio.h>
int fact(int number)
{
    int factorial;
    if(number==1 || number==0)
    {
        return 1;
    }
    return fact(number-1)*number;
}
int main()
{
    int number,result;
    printf("Please enter the number here\n");
    scanf("%d",&number);
    result=fact(number);
    printf("%d",result);
}
