#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[3][3],sum=0,i,j;
cout<<"enter the elements of matrix:";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cin>>A[i][j];
}
cout<<"\nentered elements of matrix:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<"\t"<<A[i][j]<<"\t";
cout<<"\n";
}
for(i=0;i<3;i++)
{
sum=0;
for(j=0;j<3;j++)
{
sum=sum+A[j][i];
}
cout<<"\nsum of column"<<(i+1)<<"="<<sum;
}
getch();
}






