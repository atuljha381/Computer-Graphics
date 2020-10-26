#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	float wxmin=10,wxmax=300,wymin=200,wymax=400;
	float vxmin=350,vxmax=550,vymin=200,vymax=400;
	float wx1=100,wx2=250,wy1=250,wy2=350,vx1,vx2,vy1,vy2,sx,sy;

	sx=(vxmax-vxmin)/(wxmax-wxmin);
	sy=(vymax-vymin)/(wymax-wymin);

	rectangle(wxmin,wymin,wxmax,wymax);
	rectangle(vxmin,vymin,vxmax,vymax);

	int wtext,vtext;
	wtext=((wxmin-50)+(wymin-50))/2;
	vtext=((vxmin+50)+(vymin+50))/2;

	outtextxy(wtext,180,"Window");
	outtextxy(vtext,180,"ViewPort");

	line(wx1,wy1,wx2,wy2);

	vx1=sx*(wx1-wxmin)+vxmin;
	vy1=sy*(wy1-wymin)+vymin;
	vx2=sx*(wx2-wxmin)+vxmin;
	vy2=sy*(wy2-wymin)+vymin;

	line(vx1,vy1,vx2,vy2);

	getch();
}