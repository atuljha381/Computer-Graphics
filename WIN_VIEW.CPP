#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	float wxmin,wxmax,wymin,wymax,vxmin,vxmax,vymin,vymax;
	float wx1,wx2,wy1,wy2,vx1,vx2,vy1,vy2,sx,sy;
	cout<<"Window Coordiantes: "<<endl;
	cout<<"Enter WXmin, WYmin, WXmax, WYmax"<<endl;
	cin>>wxmin>>wymin>>wxmax>>wymax;
	cout<<"Viewport Coordinates: "<<endl;
	cout<<"Enter VXmin, VYmin, VXmax,VYmax"<<endl;
	cin>>vxmin>>vymin>>vxmax>>vymax;

	cout<<"Line Coordinates: "<<endl;
	cout<<"Enter WX1, WY1, WX2, WY2"<<endl;
	cin>>wx1>>wy1>>wx2>>wy2;

	sx=(vxmax-vxmin)/(wxmax-wxmin);
	sy=(vymax-vymin)/(wymax-wymin);

	rectangle(wxmin,wymin,wxmax,wymax);
	rectangle(vxmin,vymin,vxmax,vymax);

	outtextxy(100,180,"Window");
	outtextxy(400,180,"ViewPort");
	outtextxy(100,420,"Name:Atul Jha");
	outtextxy(400,420,"UID:18BET1002");

	line(wx1,wy1,wx2,wy2);

	vx1=sx*(wx1-wxmin)+vxmin;
	vy1=sy*(wy1-wymin)+vymin;
	vx2=sx*(wx2-wxmin)+vxmin;
	vy2=sy*(wy2-wymin)+vymin;

	line(vx1,vy1,vx2,vy2);
	getch();
}