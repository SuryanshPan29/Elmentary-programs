#include<stdio.h>
#include<stdbool.h>
int main()
{
    int i,j,n,mat1[10][10],mat2[10][10];
    bool flag=true;
    printf("Please enter the size of the matrix here:-\n");
    scanf("%d",&n);
    printf("Please enter the values here for the first matrix:-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Please enter the values here for the second matrix:-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   if(mat1[i][j] != mat2[i][j])
             {
                 flag=false;
             }

        }
    }
if(flag==false)
{
    printf("Both the matrices are not identical");
}
else
{
    printf("Both of these matrices are identical");
}
}
