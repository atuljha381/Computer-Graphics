#include<iostream>
using namespace std;
#include<graphics.h>
#include<math.h>
#include<dos.h>
#define round(a)((int)(a+0.5))
void dda(int xa,int ya,int xb,int yb)
{
int dx=(xb-xa),dy(yb-ya),l,k;
float xint,yint,x=xa,y=ya;
if(abs(dx)>abs(dy))
    l=abs(dx);
    else
    l=abs(dy);
putpixel(round(x),round(y),15);
float n=log10(l)/log10(2);
xint=dx/(pow(2,n));
yint=dy/(pow(2,n));
for(k=0;k<l;k++)
{
x=x+xint;
y=y+yint;
putpixel(round(x),round(y),15);
delay(50);
}
}
int main()
{
int gd=DETECT,gm,a,b,c,d;
initgraph(&gd,&gm,"");
cout<<"enter coordinates"<<endl;
cout<<"X1:  ";
cin>>a;
cout<<"Y1:";
cin>>b;
cout<<"X2:";
cin>>c;
cout<<"Y2:";
cin>>d;
dda(a,b,c,d);
getch();
}
