#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[3][3],i,j;
cout<<"ENTER THE ELEMENTS OF MATRIX : ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cin>>A[i][j];
}
cout<<"\nENTERED ELEMENTS OF MATRIX :\n ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<"\t"<<A[i][j]<<"\t";
cout<<"\n";
}
cout<<"\nDIAGONAL 1 OF MATRIX : ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
if(i==j)
cout<<"\t"<<A[i][j];
}
cout<<"\nDIAGONAL 2 OF MATRIX : ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
if(i+j==2)
cout<<"\t"<<A[i][j];
}
getch();
}