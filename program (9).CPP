#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,y,w,d,rem;
cout<<"enter the number:";
cin>>num;
y=num/365;
rem=num%365;
w=rem/7;
d=rem%7;
cout<<"\n"<<y<<" years "<<w<<" weeks "<<d<<" days";
getch();
}