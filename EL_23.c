#include<stdio.h>
#include<math.h>
int main()
{
    double diagonal, base,height,temp,n=2;
    printf("Please enter the base and the height");
    scanf("%lf%lf",&base,&height);
    temp=(pow(base,n)+pow(height,n));
    printf("%lf",temp);
    //temp=4;
    diagonal=sqrt(temp);
    printf("the diagonal is %lf",diagonal);
    return 0;
}
