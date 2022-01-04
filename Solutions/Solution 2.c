#include<stdio.h>
#include<conio.h>
void main()
{
    int a,r;
    clrscr();
    printf("Enter The value of a:");
    scanf("%d",&a);
    for(;a>0;)
    {   
        r=a%10;
        printf(" %d",r);
        a=a/10;
       
    
    }
    
    getch();

}