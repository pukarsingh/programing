#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num;
cout<<"enter a value:";
cin>>num;
cout<<"\ntable is:";
for(int i=1;i<=10;i++)
cout<<"\n"<<num<<"*"<<i<<"="<<num*i;
getch();
}