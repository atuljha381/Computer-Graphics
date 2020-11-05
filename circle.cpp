
#include<graphics.h>
int main()
{
	int gdriver,gmode;
	gdriver=DETECT;
	initgraph(&gdriver, &gmode, "");
	int border_color=YELLOW;
	setfillstyle(1,4);
	circle(250,250,100);
	floodfill(250,250,WHITE);
	getch();
	closegraph();
}
