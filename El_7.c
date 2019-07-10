#include<stdio.h>
int prime(int a)
{
    int i,result=0,j,check;
    //bool check;
    for(i=2;i<a;i++)
    {check=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                check=1;
            }

        }
        if(check==0)
            result+=i;

    }
    return result;
}
int main()
{
    int number,sum;
    printf("Please enter the number upto which you want an sum of prime number");
    scanf("%d",&number);
    sum=prime(number);
    printf("the sum of the number is %d",sum);
}
