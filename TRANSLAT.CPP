#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm," ");
int x1,x2,x3,y1,y2,y3;
cout<<"Cout X1 and y1"<<endl;
cin>>x1>>y1;
cout<<"X2 and y2"<<endl;
cin>>x2>>y2;
cout<<"x3 and y3"<<endl;
cin>>x3>>y3;
int tx,ty;
cout<<"Enter tx and ty"<<endl;
cin>>tx>>ty;

int p[]= {x1,y1,x2,y2,x3,y3,x1,y1};
int q[]= {x1+tx,y1+ty,x2+tx,y2+ty,x3+tx,y3+ty,x1+tx,y1+ty};

drawpoly(4,p);
drawpoly(4,q);

closegraph();
getch();
}