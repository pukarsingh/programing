#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[10],i,j=0,B[10],n;
cout<<"enter the number of values(<=10) :";
cin>>n;
if(n>=10)
cout<<"\n     ONLY <10 OR =10 VALUES ARE ALLOWED    ";
else
{
cout<<"\nenter the values:";
for(i=0;i<n;i++)
cin>>A[i];
cout<<"\nentered  values  :";
for(i=0;i<n;i++)
cout<<A[i]<<"\t";
cout<<"\n\nreversable array :";
for(i=n-1;i>=0;i--)
B[j++]=A[i];
for(i=0;i<n;i++)
cout<<B[i]<<"\t";
}
getch();
}

