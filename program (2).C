#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,n,c;
clrscr();
printf("ENTER TWO VALUES: ");
scanf("%d%d:",&a,&b);
printf("\nENTER: \n 1 FOR ADDITION\n 2 FOR SUBSTRACTION\n 3 FOR MULTIPLICATION\n 4 FOR DIVISION........\n");
scanf("%d:",&n);
if(n==1)
{
c=a+b;
printf("addition is:%d",c);
}
else if(n==2)
{
c=a-b;
printf("substraction is:%d",c);
}
else if(n==3)
{
c=a*b;
printf("multiplication is:%d",c);
}
else if(n==4)
{
c=a/b;
printf("division is:%d",c);
}
else
printf("error");
getch();
}

