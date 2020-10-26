#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,x1,x2,y1,y2,px,py,rx,ry;
initgraph(&gd,&gm,"");
float ang,t;
float angle,a,b,c,d,e,f;
cout<<"Enter Coordinates"<<endl;
cout<<"Enter X1,Y1: "<<endl;
cin>>x1>>y1;
cout<<"Enter X2, Y2: "<<endl;
cin>>x2>>y2;
line(x1,y1,x2,y2);
cout<<"Enter Point coordinates: "<<endl;
cin>>px>>py;
putpixel(px,py,15);
outtextxy(px,py+10,"0");
px-=x1;
py=-y1;
t=(y2-y2)/float(x2-x1);
ang=atan(t);
ang=-ang;
rx=px*cos(ang)-py*sin(ang);
ry=px*sin(ang)+py*cos(ang);
ry=-ry;
ang=-ang;
rx=rx*cos(ang)+ry*sin(ang);
ry=rx*sin(ang)-ry*cos(ang);
rx+=x1;
ry+=y1;
putpixel(rx,ry,15);
outtextxy(rx,ry+10,"R");
getch();
}