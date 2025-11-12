#include <stdio.h>
int main()
{ int k=0,n,j,num[16]={0};
 printf("输入要转换的十进制数\n");
 scanf("%d",&n);
 printf ("%d 转换为二进制数:\n",n);
 do 
 { num[k]=n%2;
 n=n/2;k++;
 } while(n!=0); 
for(k=15;k>=0;k--)
 printf("%d",num[k]);
 return 0;
}
