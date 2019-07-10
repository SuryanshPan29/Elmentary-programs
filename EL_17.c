#include<stdio.h>
int main()
{
    int i,first,number,r;
    printf("Please enter the first ,number of times and common ratio");
    scanf("%d%d%d",&first,&number,&r);
    for(i=0;i<number;i++)
    {
        printf("Term:-%d\n",first);
        first=first*r;
    }
}
