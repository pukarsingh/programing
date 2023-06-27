#include<iostream.h>
#include<conio.h>
void swap(int &x,int &y);
int main()
{
clrscr();
int a,b;
cout<<"\n enter two number:";
cin>>a>>b;
cout<<"\n values before swapping:  a= "<<a << " & b="<<b;
swap(a,b);
cout<<"\n values after swapping:   a= "<<a << " & b="<<b;
getch();
return 0;
}
void swap(int &x,int &y)
{
int temp;
temp=x;
x=y;
y=temp;}
