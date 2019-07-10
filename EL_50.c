#include<stdio.h>
int main()
{
    int i,j,n,mat1[10][10],result[10][10];
    printf("Please enter the size of the matrix here:-\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("The matrix you entered is--\n");
     for(i=0;i<n;i++)
    {  printf("|");
        for(j=0;j<n;j++)
        {
            printf("%3d",mat1[i][j]);
        }
        printf("|\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            result[i][j]=mat1[j][i];
        }
    }
     printf("The transpose of the matrix is--\n");
     for(i=0;i<n;i++)
    {  printf("|");//this is only to show it like a matrix :--:
        for(j=0;j<n;j++)
        {
            printf("%3d",result[i][j]);
        }
        printf("|\n");
    }

}
