#include<stdio.h>
void sort(int marks[],int n)
{
    int i,j,temp,key;
    for(j=0;j<n;j++)
    {
        key=marks[j];
        i=j-1;
        while(i>=0 && key<marks[i])
        {
            marks[i+1]=marks[i];
            i--;
        }
        marks[i+1]=key;
    }
}
int main()
{
    int marks[50];
    int i,n,median;
    printf("Please enter the number of the students here\n");
    scanf("%d",&n);
    printf("Please enter the marks here\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    sort(marks,n);
    median=(n+1)/2;
    printf("The median of the marks is ---%d----\n",marks[median]);
     for(i=0;i<n;i++)
    {
        printf("%d\n",marks[i]);
    }
}
