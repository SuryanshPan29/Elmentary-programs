#include<stdio.h>
void swap(int a[100],int swape,int times);
int main()
{
    int a[100],number,swape,times,i;
    printf("Please enter how many number you want to enter");
    scanf("%d",&times);
    printf("Please enter the numbers in a list");
    for(i=0;i<times;i++)
        scanf("%d",&a[i]);
    printf("Please enter the place for which you want to swap the numbers\n");
    scanf("%d",&swape);
    swap(a,swape,times);
    printf("-----");
    for(i=0;i<times;i++)
        printf("%d\n",a[i]);
}
void swap(int a[100],int swap,int times)
{   int temp=a[swap-1];
    a[swap-1]=a[(times-swap)];
    a[(times-swap)]=temp;
    return ;
}
