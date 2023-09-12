#include<stdio.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
//	int points[]= {200,100,100,200,100,400,300,400,300,200,200,100};
		
	
cleardevice();
setcolor(RED);
	for(int i=0;i<=5000;i=i+10){
		cleardevice();
		setcolor(rand()%50);
		int points[]= {500+i,100,300+i,100,300+i,300,500+i,300,500+i,100,300+i,100};
		int point[]= {300+i,200,200+i,200,200+i,300,300+i,300,300+i,200};
		int poin[]= {500+i,200,600+i,200,600+i,300,500+i,300,500+i,200};
		drawpoly(5,points);
//	floodfill(400,200,WHITE);
	drawpoly(4,point);
	drawpoly(4,poin);
	circle(300+i,300,50);
//	floodfill(250,250,WHITE);
//	floodfill(550,250,WHITE);
	circle(500+i,300,50);
	delay(25);
	if(i>=400){
		i= -350;
	}
	}
	getch();
	closegraph();
	return 0;
}
