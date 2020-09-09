#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#define round(a) ((int)(a+0.5))
void plotpoint(float,float,float,float);
void triggered(float xc,float yc, float r)
{
	float th=0,thend=45,thinc=1/r,angle,x,y,temp=3.14/180;
	while(th<=thend)
	{
		angle=th*temp;
		x=r*cos(angle);
		y=r*sin(angle);
		plotpoint(xc,yc,round(x),round(y));
		th = th + thinc;
	}
}
void plotpoint(float xc,float yc,float x,float y)
{
	putpixel(xc+x,yc+y,1);
	putpixel(xc-x,yc+y,2);
	putpixel(xc+x,yc-y,3);
	putpixel(xc-x,yc-y,4);
	putpixel(xc+y,yc+x,5);
	putpixel(xc-y,yc+x,6);
	putpixel(xc+y,yc-x,7);
	putpixel(xc-y,yc-x,8);
	delay(5);
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int x,y,r;
	cout<<"Enter coordinates"<<endl;
	cout<<"X: "<<endl;
	cin>>x;
	cout<<"Y: "<<endl;
	cin>>y;
	cout<<"Enter radius: "<<endl;
	cin>>r;
	putpixel(x,y,2);
	triggered(x,y,r);
	getch();
}