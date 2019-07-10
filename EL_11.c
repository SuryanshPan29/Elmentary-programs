#include<stdio.h>
int main()
{
    int a[100],times,i,sum=0;
    int max=a[i],min=a[i];
    printf("Please enter how many numbers you want to enter");
    scanf("%d",&times);
    printf("Please enter the numbers");
    for(i=0;i<times;i++)
    {
        scanf("%d",&a[i]);
    }
max=a[i];min=a[i];
     for(i=0;i<times;i++)
    {
       if(max<a[i])
       {
           max=a[i];
       }
    }
    printf("max is %d",max);
     for(i=0;i<times;i++)
    {
        if(min>a[i])
       {
           min=a[i];
       }
    }
        printf("min is %d",min);
 return 0;
}

