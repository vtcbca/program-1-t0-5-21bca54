#include<stdio.h>
#include<conio.h>
void main()
{
  int n,e=0,re,o,sum=0;
  clrscr();
  printf(" Enter Number:");
  scanf("%d",&n);
  for(o=n;n!=0;)
  {
    re=n%10;
    e=re*re*re;
    n=n/10;
    sum=sum+e;
  }
  if(o==sum)
  printf("It is Armstrong.");
  else
  printf("It is not Armstrong.");
  getch();

}