#include <stdio.h>
int main()
{ int a[]={1,2,3,4,5},i,j,s=0;
 j = 1;
 for ( i = 4 ; i>=0 ; i--)
 { 
 s = s+ a[i] * j ;
 j = j * 10 ;
 }
 printf(" s= %d \n" , s );
return 0;
}
