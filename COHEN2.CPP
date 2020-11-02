#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#define xmin 150
#define xmax 500
#define ymin 100
#define ymax 370
enum{
ABOVE=0x8,BELOW=0x4,RIGHT=0x2,LEFT=0x1};
unsigned int encode(int x,int y)
{
	unsigned int c=0x0;

	if(x<xmin)
		c=c|LEFT;
	if(x>xmax)
		c=c|RIGHT;
	if(y<ymin)
		c=c|BELOW;
	if(y>ymax)
		c=c|ABOVE;

	return(c);
}

void check(unsigned int code1, unsigned int code2, int x1, int y1,int x2,int y2)
{
int accept=0,done=0;
do{
	if(!(code1|code2)){
		accept=1;done=1;
	}
	else if(code1&code2){
		accept=0;done=1;
	}
	else{
		float m=(y2-y1)/float(x2-x1),x,y;
		int code=code1?code1:code2;

		if(code&ABOVE){
		y=ymax;
		x=x1+(y-y1)/m;
		}
		else if(code & BELOW){
		y=ymin;
		x=x1+(y-y1)/m;
		}
		else if(code & LEFT){
		x=xmin;
		y=m*(x-x1)+y1;
		}
		else{
		x=xmax;
		y=m*(x-x1)+y1;
		}

		if(code==code1){
		x1=x;y1=y;
		code1=encode(x1,y1);
		}
		else{
		x2=x;y2=y;
		}
	}
}while(!done);
if(accept){
cout<<"Line is Accepted"<<endl;
line(x1,y1,x2,y2);
}
}

void bin(unsigned int c)
{
	for(int i=8;i>0;i/=2)
	(c&i)?cout<<"1":cout<<"0";
	cout<<endl;
}

void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"");
	int x1,x2,y1,y2;
	unsigned int code1,code2;

	cout<<"Enter coordinates"<<endl;
	cout<<"Enter X1 Y1: ";
	cin>>x1>>y1;
	cout<<"Enter X2 Y2"<<endl;
	cin>>x2>>y2;

	code1=encode(x1,y1);
	code2=encode(x2,y2);

	line(xmin,0,xmin,getmaxy());
	line(xmax,0,xmax,getmaxy());
	line(0,ymin,getmaxx(),ymin);
	line(0,ymax,getmaxx(),ymax);

	cout<<"Initial Region Code of Point 1: "<<endl;
	bin(code1);
	cout<<"Initial Region Code of Point 2: "<<endl;
	bin(code2);
	check(code1,code2,x1,y1,x2,y2);
	getch();
	closegraph();
}
