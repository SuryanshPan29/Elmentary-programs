#include<stdio.h>
int main()
{
    int c[50],i,n;
    printf("Please enter how many numbers you want to enter");
    scanf("%d",&n);
    printf("Please enter the elements in the array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
    {
         if(c[i]==i)
         {
             printf("The number whome index is equal to the element at that %d\n",i);
         }
    }

}
