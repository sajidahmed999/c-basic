#include<windows.h>
#include<stdio.h>
void gotoxy (int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
    int x=25,y=15;
    char ch;
    gotoxy(x,y);
    printf("SajidAhmed");
    while(1)
    {

     ch=getch();
     switch(ch)
     {

     case 'a':
            x--;
            break;
     case 'd':
            x++;
            break;
     case 'w':
            y--;
            break;
     case 's':
            y++;
            break;
     case 27:
            exit(0);
     }
     system("cls");
     gotoxy(x,y);
     printf("SajidAhmed");
    }
    getch();
}


