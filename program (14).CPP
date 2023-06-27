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
cout<<"\t"<<A[i][j];
cout<<"\n";
}
cout<<"\nMIDDLE COLUMN :";
for(i=0;i<3;i++)
cout<<"\t"<<A[i][1];
cout<<"\nMIDDLE RAW    :";
for(j=0;j<3;j++)
cout<<"\t"<<A[1][j];
getch();
}