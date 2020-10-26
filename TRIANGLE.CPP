#include<graphics.h>
#include<conio.h>
#include<dos.h>
main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int triangle[]={100,100,80,150,120,150,100,100};
drawpoly(4,triangle);
getch();
closegraph();

}