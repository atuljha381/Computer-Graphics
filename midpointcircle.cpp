#include<iostream>
using namespace std;
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void circlepl(int,int,int ,int);
void midpointcircle(int xc,int yc,int r)
{
int x=0,y=r;
int p=(1-r);
while(x<y)
{
x++;
if(p<0)
{
p=p+2*x+1;
}
else
{
y--;
p=p+2*(x-y)+1;
}
circlepl(xc,yc,x,y);
}
}
void circlepl(int xc,int yc,int x,int y)
{
putpixel(xc+x,yc+y,YELLOW);
putpixel(xc-x,yc+y,YELLOW);
putpixel(xc+x,yc-y,YELLOW);
putpixel(xc-x,yc-y,YELLOW);
putpixel(xc+y,yc+x,YELLOW);
putpixel(xc-y,yc+x,YELLOW);
putpixel(xc+y,yc-x,YELLOW);
putpixel(xc-y,yc-x,YELLOW);
}
int main()
{
int gd=DETECT,gmode,xc,yc,x,y,r;
initgraph(&gd,&gmode,"");
cout<<"enter the x point of circle:";
cin>>xc;
cout<<"enter the x point of circle:";
cin>>yc;
cout<<"radius:";
cin>>r;
outtextxy(xc-r/2,yc+r+5,"CIRCLE");
midpointcircle(xc,yc,r);
getch();

}
