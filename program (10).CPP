#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num;
cout<<"enter a number:";
cin>>num;
if(num%2==0)
cout<<"\n even:"<<num*num;
else
cout<<"\n odd:"<<num*num*num;
getch();
}