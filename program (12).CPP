#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[3][3],i,j,B[3][3];
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
cout<<"\nTRANSPOSE OF MATRIX IS :\n ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
B[i][j]=A[j][i];
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<"\t"<<B[i][j]<<"\t";
cout<<"\n";
}
getch();
}