#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[50],n,i=0,j=0;
    bool flag=true;
    printf("Please enter how many number you want to input in the array\n");
    scanf("%d",&n);
    printf("Please enter the element in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=n-1;
    i=0;
    while(i<n)
    {
        if(arr[i] != arr[j])
        {
            flag=false;
        }
    i++;
    j--;
    }
    if(flag==false)
   {
       printf("This array is not the perfect array");
   }
   else
   {
       printf("This array is perfect array");
   }
    return 0;
}

