#include<stdio.h>
#include<math.h>
int main()
{
    double square[100],sum=0,temp,sq;
    int i,number;
    printf("Please enter the numbers up to which you want a sum of the squares");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {    temp=i;
         sq=pow(temp,2.0);
         printf("%lf\n",sq);
        square[i]=sq;
        printf("array---%lf\n",square[i]);
    }
    for(i=1;i<=number;i++)
    {
        sum+=square[i];
        printf("sum------%lf\n",sum);

    }
    printf("The resulted sum is %lf\n",sum);
}
