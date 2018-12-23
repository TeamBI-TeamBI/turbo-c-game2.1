//code to make a project in c++; i will make a video on this once I get some time, for time try to understand this by discussing this program with your friends and yes it's very simple.

#include<graphics.h>
#include<process.h>
#include<conio.h>
void drawboard();
void round(int);
void cross(int);
void ask();
void turn(int);
void swap();
void winner();
int a[10],p,o,i,x,y,m,count;

void main()
{
int gd=0,gm;
initgraph(&gd,&gm,"");
for(i=1;i<10;i++)
{
drawboard();
}
while(1)
{
ask();
cleardevice();
drawboard();
winner();
swap();
}
}
void drawboard()
{
line(0,160,480,160);
line(0,320,480,320);
line(160,0,160,480);
line(320,0,320,480);
for(i=1;i<10;i++)
{
if(a[i]==0)
{
round(i);
}
if(a[i]==1)
{
cross(i);
}
}
}
void round(int a)
{
a=a-1;
x=a/3;
y=a%3;
circle(80+160*y,180+160*x,60);
}
void cross(int a)
{
a=a-1;
x=a/3;
y=a%3;
line(20+160*y,20+160*x,140+160*y,140+160*x);
line(20+160*y,140+160*x,140+160*y,20+160*x);

}
void ask()
{
m=getch();
m=m-48;
turn(m);
}
void turn(int i)
{
if(a[i]==2)
{
a[i]=p;
count=count+1;
}
else
{
outtextxy(480,10,"already marked");
ask();

}

}
void over()
{
getch();
closegraph();
exit(1);
}
void winner()
{
if(a[i]==0 && a[2]==0 && a[3]==0)
{
line(80,80,400,80);
outtextxy(480,10,"X wins");
over();
}
else if(a[4]==0 && a[8]==0 && a[9]==0)
{
line(80,240,400,240);
outtextxy(480,10,"0 wins");
over();
}
else if(a[7]==0 && a[8]==0 && a[9]==0)
{
line(80,400,400,400);
outtextxy(480,10,"x wins");
over();
}
else if(a[7]==1 && a[8]==1 && a[9]==1)
{
line(80,400,400,400);
outtextxy(480,10,"x wins");
over();
}
else if(a[1]==0 &&a[4]==0 && a[7]==0)
{
line(80,80,80,400);
outtextxy(480,10,"0 wins:");
over();
}
else if(a[1]==1 &&a[4]==1 &&a[7]==1)
{
line(80,80,80,400);
outtextxy(480,10,"x wins");
over();
}
else if(a[2]==0 &&a[5]==0 && a[8]==0)
{
line(240,80,240,400);
outtextxy(480,10,"0 wins");
over();
}
else if(a[1]==1 && a[5]==1 && a[8]==1)
{
line(240,80,240,400);
outtextxy(480,10,"0 wins");
over();
}
else if(a[2]==1 && a[5]==1 && a[8]==1)
{
line(240,80,240,400);
outtextxy(480,10,"X wins");
over();
}
else if(a[2]==1 && a[5]==1 && a[8]==1)
{
line(240,80,240,400);
outtextxy(480,10," x wins");
over();
}
else if(a[3]==0 && a[6]==0 && a[9]==0)
{
line(400,80,400,400);
outtextxy(480,10,"0 wins");
over();

}
else if(a[1]==0 && a[5]==0 && a[9]==0)
{
line(80,400,400,80);
outtextxy(480,10," 0 wins");
over();
}
else if(a[3]==1 && a[5]==1 && a[7]==1)
{
line(80,400,400,80);
outtextxy(480,10,"x wins");
over();

}
else if(count==9)
{
outtextxy(480,10,"Draw");
over();

}

}
void swap()
{
p=p+o;
o=p-o;
p=p-o;
}
