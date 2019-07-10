#include<stdio.h>
int main()
{
    int l[50],r[50];
    int i,j,n,k;
    printf("Please enter how many numbers you want to enter in the list\n");
    scanf("%d",&n);
    printf("Please enter the first list\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    printf("Please enter the Second list\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
    }
    i=0;
    j=0;
    printf("result:-\n");
    for(k=0;k<n;k++)
    {
        if(l[k]<r[k])
        {
            printf("%d\n",l[k]);
        }
        else
        {
            printf("%d\n",r[k]);
        }
    }
    return 0;

}
