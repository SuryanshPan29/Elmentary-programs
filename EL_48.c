#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,dis,r1,r2,temp,x,y;
    printf("Please enter the radius of the first circle here :-\n");
    scanf("%lf",&r1);
    printf("Please enter the radius of the second circle here :-\n");
    scanf("%lf",&r2);
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
    printf("%lf\n",dis);
    printf("%lf\n",(r1+r2));
    if(dis==(r1+r2))
    {
        printf("These two circles touches each other");
    }
    else if(dis<(r1+r2))
    {
        printf("these two circle intersect each other");
    }
    else
    {

        printf("These two circles do not touch each other nor intersect each other");
    }

}
