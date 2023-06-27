#include<iostream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int A[10][10],i,j,c,r,t;
 cout<<"ENTER THE NO. OF ROW AND COLUMN LESS THAN 10:";
 cin>>r>>c;
 cout<<"\nENTER THE ELEMENTS OF MATRIX:";
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 cin>>A[i][j];
 }
 cout<<"\nENTERED ELEMENTS OF MATRIX:\n";
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 cout<<"\t"<<A[i][j]<<"\t";
 cout<<"\n";
 }
 for(i=0;i<r;i++)
 {
 t=A[i][0];
 A[i][0]=A[i][c-1];
 A[i][c-1]=t;
 }
 cout<<"\nMATRIX AFTER INTERCHANGE THE Ist COLUMN BY LAST COLUMN:\n";
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 cout<<"\t"<<A[i][j]<<"\t";
 cout<<"\n";
 }
 getch();
 }