#include <graphics.h>
#include <conio.h>
#include <stdio.h>
// Colors : MAGENTA, CYAN, LIGHTCYAN, BROWN, DARKGRAY, LIGHTBLUE
// Good Colors : MAGENTA, CYAN, LIGHTCYAN, LIGHTBLUE, LIGHTGREEN, LIGHTRED,
//               LIGHTMAGENTA

int main()
{
    int gd = DETECT, gm;
    int points[] = {350, 20, 450, 180, 250, 180, 350, 20};

    initgraph(&gd, &gm, NULL);

    setcolor(LIGHTMAGENTA);
    outtextxy(20, 0, "Press any key to Draw Circle");
    getch();

    circle(100, 100, 80);

    setcolor(LIGHTCYAN);
    outtextxy(250, 0, "Press any key to Draw Triangle");
    getch();
    drawpoly(4, points);

    setcolor(14); // Yellow
    outtextxy(20, 250, "Press any key to Draw Rectangle");
    getch();
    rectangle(20, 300, 200, 390);

    setcolor(LIGHTGREEN);
    outtextxy(300, 250, "Press any key to Draw all");
    getch();

    int minTriangle[] = {350, 270, 406, 406, 294, 406, 350, 270};
    setcolor(LIGHTRED);
    circle(350, 350, 80);

    setcolor(LIGHTGREEN);
    drawpoly(4, minTriangle);

    setcolor(LIGHTMAGENTA);
    rectangle(290, 310, 410, 390);

    setcolor(LIGHTBLUE);
    outtextxy(480, 0, "Press any key to exit");
    getch();

    cleardevice();
    closegraph();
}