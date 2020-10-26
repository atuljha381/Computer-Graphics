#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm=DETECT;
initgraph(&gd,&gm,"");
int x1,x2,x3,y1,y2,y3,p,q;
cout<<"X1 and y2"<<endl;
cin>>x1>>y1;
cout<<"X2 Y2"<<endl;
cin>>x2>>y2;
cout<<"x3 and y3"<<endl;
cin>>x3>>y3;
float R,a,b,c,d,e,f;

cout<<"Enter rotation angle"<<endl;
cin>>R;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x1,y1,x3,y3);

p=x3;
q=y3;

R=(R*3.14)/180;
//float rx1,rx2,rx3,ry1,ry2,ry3;

a= ((x1-p)*cos(R)-(y1-q)*sin(R))+p;
b= ((x1-p)*sin(R)+(y1-q)*cos(R))+q;

c= ((x2-p)*cos(R)-(y2-q)*sin(R))+p;
d= ((x2-p)*sin(R)+(y2-q)*cos(R))+q;

e= ((x3-p)*cos(R)-(y3-q)*sin(R))+p;
f= ((x3-p)*sin(R)+(y3-q)*cos(R))+q;

/*int arr[]={x1,y1,x2,y2,x3,y3,x1,y1};
int pr[]={rx1,ry1,rx2,ry2,rx3,ry3,rx1,ry1};

drawpoly(4,arr);
drawpoly(4,pr);*/
line(a,b,c,d);
line(c,d,e,f);
line(a,b,e,f);

getch();

}
