#include <stdio.h>
#include <math.h>
int main()
{ float a, b , c ;
float s , area ;
scanf("%f ,%f ,%f" , &a, &b ,&c);
if (a+b>c&&a+c>b&&b+c>a) //构成三角形
 { s=(a+b+c)/2;
area= sqrt(s*(s-a)*(s-b)*(s-c));
printf("三角形的面积为：%f\n",area);
if (a==b&&b==c)
 printf("等边三角形\n");
else if (a==b||a==c||b==c)
 printf("等腰三角形\n"); 
else if((a*a+b*b==c*c)|| (a*a+c*c==b*b)|| (c*c+b*b==a*a))
printf("直角三角形\n");
 else printf("一般三角形\n");
}
else printf("不能组成三角形\n");
return 0;
}
