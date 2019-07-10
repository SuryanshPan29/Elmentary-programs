#include<stdio.h>
int main()
{
    int i,j,temp,c[100][100],k,temp2,temp3,n,number;
    printf("Please enter how many rows you want\n");
    scanf("%d",&n);
    printf("please enter the row you want to print\n");
    scanf("%d",&number);
    for(i=0;i<n;i++)
    {
        temp2=0;
        temp2=0;
       printf("entering first for loop------i==%d\n",i);
          k=0;
        j=0;
        while(j<n-(i+1))
        {    printf("entering first while loop------\n");
            c[i][j]='-';
            j++;
        }
        for(k=j;k<(j+((i+1)*2)-1);k++)
        {      printf("entering inside for loop------\n");
        temp2=0;
        temp2=0;
            if(i==0)
            {
            c[i][k]=1;
            }
            else
            {
                if(c[i-1][k-1]=='-')
                {
                    temp2=0;
                }
                else if(k-1<0)
                {
                    temp2=0;
                }
                else
                {
                    temp2=c[i-1][k-1];
                }
                if(c[i-1][k+1]=='-')
                {
                    temp3=0;

                }
                else if(k+1>((n*2)-1))
                {
                    temp3=0;
                }
                else
                {
                    temp3=c[i-1][k+1];
                }
                printf("temp2 for c[%d][%d]is---%d---\n",i,k,temp2);
                printf("temp3 for c[%d][%d]is---%d---\n",i,k,temp3);
                printf("temp2+temp3 is %d for c[%d][%d]\n",temp2+temp3,i,k);
                if(temp2+temp3 != 0)
                {
                 c[i][k]=temp2+temp3;
                }
                else
                {
                    c[i][k]= '-' ;
                }
            }
        }
       while(k<=((n*2)-1))
        {    printf("entering last while loop------\n");
            c[i][k]='-';
            k++;
        }
printf("-------------------------\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n*2)-1;j++)
        {   if(c[i][j]=='-')
        {
            printf("-");
        }
        else
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    printf("the requested row is----\n");
        for(j=0;j<(n*2)-1;j++)
        {   if(c[number-1][j]=='-')
        {
            printf("-");
        }
        else
            printf("%d",c[number-1][j]);
        }
        printf("\n");
    }
