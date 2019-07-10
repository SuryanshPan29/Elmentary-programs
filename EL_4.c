#include<stdio.h>
int main()
{
    int number,i=0,sum=0;
    printf("Please enter the number:-");
    scanf("%d",&number);
    while(i<=number)
    {
          sum+=i;
            i++;
    }
    printf("resulted sum is %d",sum);
    return 0;
}
