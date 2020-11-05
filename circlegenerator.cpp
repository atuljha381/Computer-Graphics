#include<iostream>
using namespace std;
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
#define round(a) ((int)(a+0.5))
float x=0,y=0;
int r;
int xc,yc;
int main()
{
           int gd=DETECT,gm;
           initgraph(&gd,&gm,"");
           x=0;y=r;
           cout<<"enter the points:";
cin>>xc>>yc;
cout<<"radius:";
cin>>r;
           for(x=0;x<y;x++)
           {
           double temp=((r*r)-(x*x));
           y=sqrt(temp);
           putpixel(xc+(x),yc+(y),YELLOW);
           putpixel(xc-(x),yc+(y),BLUE);
           putpixel(xc+(x),yc-(y),RED);
           putpixel(xc-(x),yc-(y),BLUE);
           putpixel(xc+(y),yc+(x),YELLOW);
           putpixel(xc-(y),yc+(x),BLUE);
           putpixel(xc+(y),yc-(x),GREEN);
           putpixel(xc-(y),yc-(x),WHITE);
           delay(50);
           }
            getch();
               closegraph();
}
