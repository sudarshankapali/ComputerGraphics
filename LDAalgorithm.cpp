#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	float x1 = 100,x2 = 400,y1 = 100,y2 = 400,dx,dy,delx,dely;
	int k;
	dx = x2 -x1;
	dy = y2 - y1;
	
	if(dy<dx){
		k = dx;
	}
	else{
		k = dy;
	}
	if(k<0){
		k = k * (-1);
	}
	delx = dx/k;
	dely = dy/k;
	x = x1,
	y = y1;
	for(int i=1;i<=k;i++){
		x = x + delx;
		y = y + dely;
			putpixel(x,y,GREEN);
	}
	getch();
		closegraph();
	return 0;
}
