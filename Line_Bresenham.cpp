// C++ program to draw line using Bresenham's line generating algorithm.

#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	int x,y,x1,y1,x2,y2,dx,dy,p;
	cout<<"Enter the values of x1 and y1: ";
	cin>>x1>>y1;
	cout<<"\nEnter the values of x2 and y2; ";
	cin>>x2>>y2;
	dx = x2 -x1;
	dy = y2 -y1;
	x = x1;
	y = y1;
	p=2*dy - dx;
	initgraph(&gd,&gm,"");
	while(x<x2)
	{
		if (p<0)
		{
			p = p + 2*dy;
			x++;
		}
		else
		{
			p = p + 2*dy - 2*dx;
			x++;
			y++;
		}
	    putpixel(x,y,CYAN);
	    delay(10);
	}
    getch();
    closegraph();

}
