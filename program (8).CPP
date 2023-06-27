#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float r;
int choice;
cout<<"enter the radius of circle:";
cin>>r;
cout<<"\n menu:\n press 1 for area:\n press 2 for perimeter:";
cin>>choice;
if(choice==1)
cout<<"\n area ="<<3.14*r*r;
else if(choice==2)
cout<<"\n perimeter ="<<2*3.14*r;
getch();
}