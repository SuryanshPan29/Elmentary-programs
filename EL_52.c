#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,dis,temp,x,y;
    printf("Please enter the x and y coordinate for the first circle here :-\n");
    scanf("%lf%lf",&x1,&y1);
    printf("Please enter the x and y coordinate for the second circle here :-\n");
    scanf("%lf%lf",&x2,&y2);
    x=(x2-x1);
    x=x*x;
    y=(y2-y1);
    y=y*y;
    temp=(x+y);
    dis=sqrt(temp);
    printf(" The nearest integer value is %.0lf\n",round(dis));


}
