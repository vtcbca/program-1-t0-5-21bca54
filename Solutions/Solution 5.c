#include<stdio.h>  
int main(){    
int n,i,m=0,f;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;     
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");       
//f=1100;
break;
}    
}    
if(f==0)
{ 
printf("Number is prime");     
}
return 0;  
}    