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
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
 return 0;
}
