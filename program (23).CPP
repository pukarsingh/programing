#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ph,c,m,e,cs,p,s;
cout<<"enter the marks of your subject:";
cin>>ph>>c>>m>>e>>cs;
s=ph+c+m+e+cs;
cout<<"\ntotal marks is :"<<s;
p=s/5;
cout<<"\nand percentage is:"<<p;
if(p>=60&&p<70)
cout<<"\n grade : D";
else if(p>=70&&p<80)
cout<<"\n grade : C";
else if(p>=80&&p<90)
cout<<"\n grade : B";
else if(p>=90&&p<=100)
cout<<"\n grade : A";
else if(p<40)
cout<<"\n  YOU ARE FAIL ";
else
cout<<"\n YOU HAVE TO DO HARD WORK ";
getch();
}
