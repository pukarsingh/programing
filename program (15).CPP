
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
 t=A[0][i];
 A[0][i]=A[r-1][i];
 A[r-1][i]=t;2
 }
 cout<<"\nMATRIX AFTER INTERCHANGE THE Ist ROW BY LAST ROW:\n";
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 cout<<"\t"<<A[i][j]<<"\t";
 cout<<"\n";
 }
 getch();
 }


