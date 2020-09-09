#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
void plotpoint(int,int,int,int);
void generator(int xc,int yc,int r)
{
	int x=0,y=r;
	float xe = r/1.414;
	while(x<=xe)
	{
		y=sqrt((r*r)-(x*x));
		plotpoint(xc,yc,x,y);
		delay(50);
	}
}

void plotpoint(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,1);
	putpixel(xc-x,yc+y,2);
	putpixel(xc+x,yc-y,3);
	putpixel(xc-x,yc-y,4);
	putpixel(xc+y,yc+x,5);
	putpixel(xc-y,yc+x,6);
	putpixel(xc+y,yc-x,7);
	putpixel(xc-y,yc-x,8);
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int x,y,r;
	cout<<"Enter the coordinates"<<endl;
	cout<<"X:"<<endl;
	cin>>x;
	cout<<endl<<"Y:";
	cin>>y;
	cout<<"Enter Radius: "<<endl;
	cin>>r;
	putpixel(x,y,2);
	generator(x,y,r);
	getch();
}