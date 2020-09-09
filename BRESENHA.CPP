#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int sign(int x)
{
	if(x>0)
	return 1;
	else if(x<0)
	return -1;
	else
	return 0;
}
void bres(int xa, int ya, int xb, int yb)
{
	int s1,s2,n=1,flag=0,x=xa,y=ya,k,t,p;
	int dy,dx;
	dx=abs(xb-xa);
	dy=abs(yb-ya);
	s1=sign(xb-xa);
	s2=sign(yb-ya);
	if(dy>dx)
	{
		t=dx;
		dx=dy;
		dy=t;
		flag=1;
	}
	else
	{
		flag=0;
	}
	p=2*dy-dx;

	putpixel(x,y,2);
	delay(10);
	while(n<=dx)
	{
		if(p>=0)
		{
			x=x+s1;
			y=y+s2;
			p=p+2*(dy-dx);
		}
		else
		{
			if(flag==1)
				y=y+s2;
			else
				x=x+s1;
		}
		p=p+2*dy;
		putpixel(x,y,2);
		n=n+1;
		delay(10);
	}
}

int main()
{
	int gd=DETECT,gm,x1,x2,y1,y2;
	initgraph(&gd,&gm," ");
	cout<<"Enter x1 and y1"<<endl;
	cin>>x1>>y1;
	cout<<"Enter x2 and y2"<<endl;
	cin>>x2>>y2;
	bres(x1,y1,x2,y2);
	getch();
	return 0;
}