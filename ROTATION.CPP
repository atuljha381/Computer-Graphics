#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int x1,x2,x3,y1,y2,y3;
cout<<"X1 and y2"<<endl;
cin>>x1>>y2;
cout<<"X2 Y2"<<endl;
cin>>x2>>y2;
cout<<"x3 and y3"<<endl;
cin>>x3>>y3;
float R;

cout<<"Enter rotation angle"<<endl;
cin>>R;
R=R*(3.142/180);
float rx1,rx2,rx3,ry1,ry2,ry3;
rx1= x1*cos(R)-y1*sin(R);
ry1= y1*cos(R)+x1*sin(R);
rx2= x2*cos(R)-y2*sin(R);
ry2= y2*cos(R)+x2*sin(R);
rx3= x3*cos(R)-y3*sin(R);
ry3= y3*cos(R)+x3*sin(R);

int p[]={x1,y1,x2,y2,x3,y3,x1,y1};
int pr[]={rx1,ry1,rx2,ry2,rx3,ry3,rx1,ry1};

drawpoly(4,p);
drawpoly(4,pr);
getch();

}