#include <stdio.h>
#include <string.h> 
int main()
{ char str[10],temp[10]={""};
 int i;
 for (i=0;i<4;i++)
 { gets(str);
 if(strlen(str))strcpy(temp,str);
 } 
 puts(temp);
 return 0;
}
