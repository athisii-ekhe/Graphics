// C++ program to draw circle using Mid-Point.

#include <iostream.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawCircle(int , int , int , int );
void main()
{
    int gd = DETECT, gm;
    int x, y, xc, yc, r, p;
    cout << "Enter the co-ordinates of centre: ";
    cin >> xc >> yc;
    cout << "\nEnter the radius: ";
    cin >> r;
    x = 0;
    y = r;
    p = 1 - r;

    initgraph(&gd, &gm, "");
    drawCircle(x,y,xc,yc);
    while (x <= y)
     {
		x++;
		if (p < 0)
		 {
			p = p + 2 * x + 1;
	     }
	    else
		 {
		  y--;
		  p = p + 2 * x + 1 - 2 * y;
		 }
		drawCircle(x,y,xc,yc);
		delay(20);

     }


    getch();
    closegraph();
}
    
void drawCircle(int x,int y,int xc,int yc)
   {
	  putpixel(xc + x, yc + y, CYAN);
	  putpixel(xc - x, yc + y, CYAN);
	  putpixel(xc + x, yc - y, CYAN);
	  putpixel(xc - x, yc - y, CYAN);
	  putpixel(xc + y, yc + x, CYAN);
	  putpixel(xc - y, yc + x, CYAN);
	  putpixel(xc + y, yc - x, CYAN);
	  putpixel(xc - y, yc - x, CYAN);
   }