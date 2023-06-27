#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[3][3],i,j,B[3][3],C[3][3];
cout<<"ENTER THE ELEMENTS OF MATRIX A: ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cin>>A[i][j];
}
cout<<"\nENTER THE ELEMENTS OF MATRIX B: ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cin>>B[i][j];
}
cout<<"\nENTERED ELEMENTS OF MATRIX A:\n ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<"\t"<<A[i][j]<<"\t";
cout<<"\n";
}
cout<<"\nENTERED ELEMENTS OF MATRIX B:\n ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<"\t"<<B[i][j]<<"\t";
cout<<"\n";
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
C[i][j]=A[i][j]+B[i][j];
}
cout<<"\nSUM OF MATRIX A AND B:\n ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<"\t"<<C[i][j]<<"\t";
cout<<"\n";
}
getch();
}
