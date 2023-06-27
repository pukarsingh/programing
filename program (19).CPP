#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,l,s,A[10],n;
cout<<"enter number of values(<=10):";
cin>>n;
if(n>10)
cout<<"\nONLY <10 OR =10 NUMBERS ARE ALLOWED";
else
{
cout<<"\nenter the values :";
for(i=0;i<n;i++)
cin>>A[i];
cout<<"\nentered values is:";
for(i=0;i<n;i++)
cout<<A[i]<<"\t";
l=s=A[0];
for(i=1;i<n;i++)
{
if(l<A[i])
l=A[i];
if(s>A[i])
s=A[i];
}
cout<<"\n\nlargest number :"<<l;
cout<<"\n\nsmallest number :"<<s;
}
getch();
}
