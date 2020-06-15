#include<windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
 char main()
{
   int a=65,b=71,c=72,d=73,e=78,f=82,g=83,h=84;
     gotoxy(31,12);
    printf("%c%c%c%c%c%c%c",c,a,f,g,c,d,h);
    gotoxy(31,13);
    printf("%c%c%c%c%c",g,d,e,b,c);
}
