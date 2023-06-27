#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,m=1;
cout<<"enter any number for factorial:";
cin>>n;
cout<<"\nfactorialis:\n";
for(i=n;i>=1;i--)
m=m*i;
cout<<n;
for(i=n-1;i>=1;i--)
cout<<"*"<<i;
cout<<"=";
cout<<m;
getch();
}