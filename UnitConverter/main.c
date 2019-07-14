#include <stdio.h>
#include <stdlib.h>
#include"conio2.h"

int main()
{
    int choice;
    while(1)
    {
        choice= enterchoice();
        if(choice==12)
        {
            exit(0);
        }
        switch(choice)
        {
            case 1:
                {
                    clrscr();
                    currency();
                    break;
                }
            case 2:
                {
                    clrscr();
                    length();
                    break;

                }
            case 3:
                {
                    clrscr();
                    weight();
                    break;

                }
            case 4:
                {
                    clrscr();
                    fuel();
                    break;

                }
            case 5:
                {
                    clrscr();
                    volume();
                    break;

                }
            case 6:
                {
                    clrscr();
                    time();
                    break;

                }
            case 7:
                {
                    clrscr();
                    area();
                    break;

                }
            case 8:
                {
                    clrscr();
                    temperture();
                    break;

                }
            case 9:
                {
                    clrscr();
                    pressure();
                    break;

                }
            case 10:
                {
                clrscr();
                power();
                break;

                }
            case 11:
                {
                    clrscr();
                    metric();
                    break;
                }
            default:
            textcolor(LIGHTRED);
            printf("Wrong Choice!Try again\n");
            getch();
            fflush(stdin);
            clrscr();
        }
    }
    return 0;
}
