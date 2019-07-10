#include<stdio.h>
int main()
{
    int a[100],i=0,d,times,start;
    printf("Please enter length up to which you want an A.P \n");
    scanf("%d",&times);
    printf("Please enter the common difference  here\n");
    scanf("%d",&d);
    printf("Please enter the starting number here  here\n");
    scanf("%d",&start);
//    for(i=start;i<times;i+=d)
     while(i<times)
    {
        printf("%d\n",start);
        start+=d;
        i++;
    }


}
