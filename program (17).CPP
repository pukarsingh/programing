#include<iostream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int A[10][10],i,j,k,r,c,p,q,B[10][10],C[10][10];
 cout<<"ENTER THE NO. OF ROW AND COLUMN OF MATRIX A LESS THAN 10:";
 cin>>r>>c;
 cout<<"\nENTER THE NO. OF ROW AND COLUMN OF MATRIX B LESS THAN 10:";
 cin>>p>>q;
 if(c!=p)
 cout<<"\n     MULTIPLICATION NOT POSSIBLE";
 else
 {
 cout<<"\nENTER THE ELEMENTS OF MATRIX A:";
 for(i=0;i<r;i++)
  {
 for(j=0;j<c;j++)
 cin>>A[i][j];
  }
 cout<<"\nENTER THE ELEMENTS OF MATRIX B:";
 for(i=0;i<r;i++)
  {
 for(j=0;j<c;j++)
 cin>>B[i][j];
  }
  cout<<"\nENTERED ELEMENTS OF MATRIX A:\n";
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 cout<<"\t"<<A[i][j]<<"\t";
 cout<<"\n";
 }
 cout<<"\nENTERED ELEMENTS OF MATRIX B:\n";
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 cout<<"\t"<<B[i][j]<<"\t";
 cout<<"\n";
 }
 for(i=0;i<r;i++)
  {
 for(j=0;j<q;j++)
  {
 C[i][j]=0;
 for(k=0;k<c;k++)
 C[i][j]=C[i][j]+A[i][k]*B[k][j];
 }
 }
 }
  cout<<"\nMULTIPLICATION OF MATRIX A AND B:\n";
 for(i=0;i<r;i++)
  {
 for(j=0;j<q;j++)
 cout<<"\t"<<C[i][j]<<"\t";
 cout<<"\n";
 }
 getch();
 }