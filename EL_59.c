#include<stdio.h>
void sort(int c[],int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = c[i];
        j = i - 1;
        while (j >= 0 && c[j] > key)
        {
            c[j + 1] = c[j];
            j = j - 1;
        }
        c[j + 1] = key;
    }
      for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);
    }
    printf("-----\n");
    }

int main()
{
    int c[100],n,i;
    printf("Please enter the number of the elements you want to enter here\n");
    scanf("%d",&n);
    printf("Please enter the elements here\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    printf("--------\n");
      for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);
    }
        sort(c,n);
       printf("The second largest number here is %d",c[n-2]);
       printf("--------------\n");
       for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);
    }
return 0;
}
