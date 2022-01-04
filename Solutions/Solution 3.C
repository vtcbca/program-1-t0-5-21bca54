#include<stdio.h>
#include<conio.h>
void main()
{
  int n,e=0,re,o;
  clrscr();
  printf(" Enter Number:");
  scanf("%d",&n);
  for(o=n;n|=0;)
  {
    re=n%10;
    e=e*10+re;
    n=n/10;
  }
  if(o==e)
  printf("It is palindrome.");
  else
  printf("It is not palindrome.");
  getch();

}
