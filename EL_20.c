#include<stdio.h>
int main()
{
    int number,i;
    int sum=0;
    printf("Please enter the number");
    scanf("%d",&number);
    for(i=1;i<number;i++)
    {
        if(i%3==0 || i%7==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
}
