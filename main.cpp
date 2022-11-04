#include <graphics.h>
#include <conio.h>
using namespace std;
int main()
{
    initwindow(1000, 700);

    //Predmet sohasi
    ellipse(500,350,0,360,70,25);
    outtextxy(475,342,"Fakultet");

    //obyektlar
    rectangle(380,270,450,300);
    outtextxy(390,278,"Ro'yxat");
    line(450,300,460,328);

    rectangle(480,270,580,300);
    outtextxy(490,278,"Passport_m");
    line(530,300,530,328);

    rectangle(340,380,440,410);
    outtextxy(350,388,"Yo'nalishlar");
    line(440,380,460,370);

    rectangle(600,320,730,350);
    outtextxy(610,328,"Yashash manzili");
    line(600,335,570,345);

    rectangle(590,370,690,400);
    outtextxy(600,378,"Ta'lim shakli");
    line(590,385,560,365);

    rectangle(460,400,570,430);
    outtextxy(470,408,"Oilaviy ahvoli");
    line(505,400,505,375);

    rectangle(275,330,415,360);
    outtextxy(285,338,"Qayerdan qatnaydi");
    line(410,345,430,345);

    //maydonlar
    ellipse(210,340,0,360,30,15);
    outtextxy(200,330,"T/r");
    ellipse(200,380,0,360,60,15);
    outtextxy(160,370,"Qatnash joyi");
    line(240,340,275,340);
    line(260,380,275,360);

    ellipse(430,480,0,360,30,15);
    outtextxy(422,470,"T/r");
    ellipse(515,500,0,360,50,15);
    outtextxy(490,490,"Sharoiti");
    line(515,485,515,430);
    line(460,430,430,465);

    ellipse(270,420,0,360,30,15);
    outtextxy(260,410,"T/r");
    ellipse(350,450,0,360,50,15);
    outtextxy(320,442,"Yo'nalish");
    line(340,395,300,420);
    line(380,410,350,435);

    ellipse(690,440,0,360,30,15);
    outtextxy(680,430,"T/r");
    line(690,425,690,400);
    ellipse(640,470,0,360,60,15);
    outtextxy(600,460,"Ta'lim shakli");
    line(640,455,640,400);

    ellipse(750,260,0,360,30,15);
    outtextxy(740,250,"T/r");
    line(690,320,720,260);
    ellipse(800,300,0,360,50,15);
    outtextxy(780,290,"Viloyat");
    line(730,320,750,300);
    ellipse(820,340,0,360,50,15);
    outtextxy(800,330,"Tuman");
    line(730,335,770,340);
    ellipse(820,380,0,360,50,15);
    outtextxy(807,372,"MFY");
    line(730,350,770,380);
    ellipse(800,420,0,360,50,15);
    outtextxy(780,410,"Ko'cha");
    line(710,350,750,420);

    ellipse(500,230,0,360,30,15);
    outtextxy(490,220,"T/r");
    line(500,270,500,245);
    ellipse(605,210,0,360,80,15);
    outtextxy(550,200,"Passport seriyasi");
    line(530,270,600,225);
    ellipse(650,250,0,360,50,15);
    outtextxy(620,240,"JSHSHIR");
    line(580,270,600,250);

    ellipse(450,200,0,360,30,15);
    outtextxy(445,190,"ID");
    line(450,270,450,215);
    ellipse(400,150,0,360,50,15);
    outtextxy(390,140,"FIO");
    line(430,270,400,165);
    ellipse(250,140,0,360,50,15);
    outtextxy(235,130,"Y_m");
    line(415,270,300,140);
    ellipse(350,120,0,360,60,15);
    outtextxy(310,110,"Ta'lim shakli");
    line(415,270,340,135);
    ellipse(210,180,0,360,50,15);
    outtextxy(180,170,"Yo'nalishi");
    line(410,270,260,180);
    ellipse(230,220,0,360,50,15);
    outtextxy(190,210,"Passport_m");
    line(395,270,280,220);
    ellipse(200,260,0,360,80,15);
    outtextxy(140,250,"Qayerdan qatnaydi");
    line(380,270,280,260);
    ellipse(200,300,0,360,70,15);
    outtextxy(154,290,"Oilaviy ahvoli");
    line(380,285,270,300);

    getch();
    closegraph();
}
