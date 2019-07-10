#include<stdio.h>
int main()
{
    int arr[10][10],i,j,sum=0;
    printf("Please enter the matrix here");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          scanf("%d",&arr[i][j]);

      }
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          if(i==j)
          {
              sum+=arr[i][j];
          }

      }
    }
    printf("%d",sum);
}






