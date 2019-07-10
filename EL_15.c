#include<stdio.h>
#include<stdbool.h>
bool check(int a,int b[])
{  int i;
    bool result=false;
    for(i=0;i<9;i++)
    {
        if(a==b[i])
        {
            result=true;
            break;
        }
    }
    return result;
}
int main()
{
    int i,n;
    bool result;
    int b[]={1,2,3,4,5,67,8,9,7};
    printf("Please enter the number here\n");
    scanf("%d",&n);
    result=check(n,b);
    if(result==true)
    printf("The numbert is present");
    else
        printf("The number is not present here");
    return 0;
}
