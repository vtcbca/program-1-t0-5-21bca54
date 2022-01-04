#include<stdio.h>
#include<conio.h>
void main()
{
  int n,e=0,re,sum=0;
  clrscr();
  printf(" Enter Number:");
  scanf("%d",&n);
  for(;n!=0;)
  {
    re=n%10;
    n=n/10;
    sum=sum+re;
  }
  printf("It is palindrome.%d",sum);

  getch();

}