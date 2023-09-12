#include<stdio.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	int points[]= {200,100,100,200,100,400,300,400,300,200,200,100};
	
	putpixel(100,100,RED);
	line(0,0,100,100);
	x=getmaxx()/2;
	y=getmaxy()/2;
//	setcolor(RED);
	circle(x,y,100);
	ellipse(500,500,0,300,50,80);
	cleardevice();
	drawpoly(4,points);
//	for(int i=100;i<=1000;i++)
//	{
//		setcolor(rand()%50);
//		circle(rand()%i,rand()%i+20,rand()%100);
//		delay(100);
//	}
cleardevice();
//setcolor(GREEN);
	drawpoly(6,points);
	
	getch();
	closegraph();
	return 0;
}
