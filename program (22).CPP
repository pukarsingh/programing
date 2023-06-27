#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int y;
cout<<"enter the year:";
cin>>y;
if(y%4==0)
cout<<"\nentered year is a leap year:";
else
cout<<"\nentered year is not a leap year:";
getch();
}