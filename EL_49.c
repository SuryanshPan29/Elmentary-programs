#include<stdio.h>
#include<stdbool.h>
bool checking(int c[],int n)
{
    int i,j,temp,key;
    bool flag=true;
    for(j=0;j<n;j++)
    {
        key=c[j];
        i=j-1;
        while(i>=0 && key<c[i])
        {
        flag=false;
            break;
        }
        if(flag==false)
        {
            break;
        }
    }
    return flag;
}
int main()
{
    int i,j,key,c[50],n;
    bool flag;
    printf("Please enter how many numbers you want to enter \n");
    scanf("%d",&n);
    printf("Please enter the elements in the array in sorted form in ascending order");
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    flag=checking(c,n);
    if(flag==true)
    {
        printf("Yes the array you entered is in sorted manner");
    }
    else
    {
        printf("The array you entered is not in sorted manner");
    }
}
