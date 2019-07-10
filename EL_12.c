#include<stdio.h>
int main()
{
    int number,sum=0;
    char continueit='y';
    while(continueit!='n')
    {
        printf("Please enter the number here\n");
        scanf("%d",&number);
        sum+=number;
        printf("The sum is %d\n",sum);
        printf("Do you want to continue press y or press n\n");
        fflush(stdin);
        scanf("%c",&continueit);
        printf("%c",continueit);
    }
    return 0;
}
