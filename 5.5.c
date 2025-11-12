#include<stdio.h>
int main()
{ int a[10]={10,9,8,7,6,5,4,3,2,1};
 int k,s,i;
 float ave;
 for(i=0,k=s=0;i<10;i++)
 { if(a[i]%2==0) continue ;
 s+=a[i];
 k++;
 }
 if(k!=0) 
{ ave=s/k; 
printf ("%d,%f\n",k,ave);
 }
 return 0;
}
