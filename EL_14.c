#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("Please enter how many number you want to enter\n");
    scanf("%d",&n);
    printf("Please enter the numbers here\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The reversed list is:-\n");
    for(i=1;i<n;i+=2)
    {
        printf("%d\n",a[i]);
    }
 return 0;
}

