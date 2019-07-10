#include<stdio.h>
int main()
{
    int a[100],times,i,sum=0;
    printf("Please enter how many numbers you want to enter");
    scanf("%d",&times);
    printf("Please enter the numbers");
    for(i=0;i<times;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<times;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
}
