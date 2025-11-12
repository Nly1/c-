#include<stdio.h>
int main()
{ int k ;
int a[3][3] = {9,8,7,6,5,4,3,2,1} ;
for (k =0;k < 3;k++ )
printf("%d \n",a[k][2-k]);
 return 0;
}
