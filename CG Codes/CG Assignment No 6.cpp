#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    int gdriver = DETECT,gmode;
    initgraph(&gdriver,&gmode,NULL);
    int i,j;
    setbkcolor(BLUE);
    setcolor(RED);
    rectangle(0,0,getmaxx(),getmaxy());
    outtextxy(250,240," ");
    for(i=50,j=0;i<=250,j<=250;i+=5,j+=5)
    {
        delay(120);
        cleardevice();
        if(i<=150)
        {
            setcolor(YELLOW);
            setfillstyle(1,YELLOW);
            fillellipse(i,300-j,20,20);
        }
        else
        {
            setcolor(GREEN^RED);
            setfillstyle(1,GREEN^RED);
            fillellipse(i,300-j,20,20);
        }
    }
    delay(900);
    cleardevice();
    setcolor(RED);
    setfillstyle(1,RED);
    fillellipse(300,50,20,20);
    delay(500);

    int k,l;
    for(k=305,l=55;k<=550,l<=300;k+=5,l+=5)
    {
        delay(120);
        cleardevice();
        if(k<=450)
        {

            setcolor(GREEN^RED);
            setfillstyle(1,GREEN^RED);
            fillellipse(k,l,20,20);
        }
        else
        {
            setcolor(YELLOW);
            setfillstyle(1,YELLOW);
            fillellipse(k,l,20,20);
        }
    }
    cleardevice();
    closegraph();
    return 0;
}
