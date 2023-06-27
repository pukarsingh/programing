#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int t1=0,t2=1,t3,n;
cout<<"enter the number of term of series:";
cin>>n;
cout<<"\n series is:";
cout<<"\n"<<t1<<" "<<t2<<" ";
for(int i=3;i<=n;i++)
{
t3=t1+t2;
cout<<t3<<" ";
t1=t2;
t2=t3;
}
getch();
}
