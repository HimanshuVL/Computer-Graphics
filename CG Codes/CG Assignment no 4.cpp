#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
	int gd=DETECT,gm,s;
	initgraph(&gd,&gm,NULL);
	do
	{
		cout<<"1.Translation";
		cout<<"\n2.Rotation";
		cout<<"\n3.Scaling";
		cout<<"\n4.Reflection";
		cout<<"\nSelect the operation :";
		cin>>s;
		switch(s)
		{
			case 1:
				{
					int x1=200,y1=150,x2=300,y2=250;
					int tx=50,ty=50;
					cout<<"Rectangle before translation"<<endl;
					rectangle(x1,y1,x2,y2);
					setcolor(4);
					cout<<"Rectangle after translation"<<endl;
					rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
					getch();
					cleardevice();
					break;
				}
			case 2:
				{
					long x1=200,y1=200,x2=300,y2=300;
					double a,angel;
					cout<<"Line without rotation"<<endl;
					setcolor(3);
					line(x1,y1,x2,y2);
					cout<<"After Rotation ";
					cout<<"\nEnter the angel :";
					cin>>angel;
					a=(angel*3.14)/180;
					long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
					long yr=y1+((x2-x2)*sin(a)+(y2-y1)*cos(a));
					setcolor(2);
					line(x1,y1,xr,yr);
					getch();
					cleardevice();
					break;
				}
			case 3:
				{
					int x1=30,y1=30,x2=70,y2=70,x=2,y=2;
					cout<<"Before Scaling";
					setcolor(3);
					rectangle(x1,y1,x2,y2);
					cout<<"After Scaling";
					setcolor(10);
					rectangle(x1*x,y1*y,x2*x,y2*y);
					getch();
					cleardevice();
					break;
				}
			case 4:
				{
					int x1=200,y1=300,x2=500,y2=300,x3=350,y3=400;
					cout<<"Before reflection";
					setcolor(3);
					line(x1,y1,x2,y2);
					line(x1,y1,x3,y3);
					line(x2,y2,x3,y3);
					cout<<"After the reflection";
					setcolor(5);
					line(x1,-y1+500,x2,-y2+500);
					line(x1,-y1+500,x3,-y3+500);
					line(x2,-y2+500,x3,-y3+500);
					getch();
					cleardevice();
					break;
				}
			case 5:
					{break;}
		}
	}while(s!=5);
	closegraph();
	return 0;
}
