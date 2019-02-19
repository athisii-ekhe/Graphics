// C++ program to draw line using DDA line generating algorithm.

#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#define Round(x) (x+0.5)
void main()
{
  int gd=DETECT,gm,i;
  int x, y, x1, y1,x2,y2,dx,dy,steps;
  float  xInc, yInc;
  cout<<"Enter the value of x1 and y1: ";
  cin>>x1>>y1;
  cout<<"Enter the value of x2 and y2: ";
  cin>>x2>>y2;
  dx =x2 -x1;
  dy =y2 - y1;
  x = x1;
  y = y1;
  if (dx>=dy)
    steps =dx;
  else
    steps = dy;

  xInc = dx/steps;
  yInc = dy/steps;
  
  initgraph(&gd, &gm, ""); //Initialization of graphic console.
  putpixel(Round(x),Round(y),CYAN);

  for (i=1;i<=steps;i++)
  {
    x+=xInc;
    y+=yInc;
    putpixel(Round(x),Round(y),CYAN);
    delay(15);
  }
  getch();
  closegraph();
}