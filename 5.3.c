#include <stdio.h>
int main()
{ int i= 0 ;
char a[ ] = "cbm" ;
char b[ ] = "cqid" , c[10] ;
while ( a[i] != '\0' && b[i] != '\0' )
{ if (a[i] >= b[i] ) c[i] = a[i] - 32 ;
 else c[i] = b[i] - 32 ; 
 ++i ;
}
c[i] = '\0';
puts(c) ;
return 0;
}
