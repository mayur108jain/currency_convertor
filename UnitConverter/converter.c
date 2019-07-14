#include <stdio.h>
#include <stdlib.h>
#include"conio2.h"
#include<string.h>
int enterchoice()
{
    int choice,i;
    gotoxy(28,1);
    textcolor(YELLOW);
    printf("UNIT AND CURRENCY CONVERTER\n");
    for(i=0;i<=125;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("select an option:\n");
    printf("1- Currency\n2- Length\n3- Weight\n4- Fuel\n5- Volume\n6- Time\n7- Area\n8- Temperature\n9- Pressure\n10- Power\n11- Metric\n12- Exit\n");
    printf("enter choice: ");
    scanf("%d",&choice);
    return choice;

}
void error()
{
    textcolor(LIGHTRED);
    printf("Wrong Input!Try again\n");
    getch();
    fflush(stdin);
    clrscr();
}
void currency()
{
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Indian Rupee\n2- Us Dollar\n3- UAE Dirham\n4- Euro\n5- Pound\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if(choice==1||choice==2||choice==3||choice==4||choice==5&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val*0.014;
                    f=" rs";
                    break;
                case 2:
                    ans=val;
                    f=" dollar";
                    break;
                case 3:
                    ans=val*0.27;
                    f=" dir";
                    break;
                case 4:
                    ans=val*1.16;
                    f=" eu";
                    break;
                case 5:
                    ans=val*1.31;
                    f=" pou";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans/0.014;
                    t=" rs";
                    break;
                case 2:
                    ans=ans;
                    t=" dollar";
                    break;
                case 3:
                    ans=ans/0.27;
                    t=" dir";
                    break;
                case 4:
                    ans=ans/1.16;
                    t=" eu";
                    break;
                case 5:
                    ans=ans/1.31;
                    t=" pou";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }

}
void length()
{
    clrscr();
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Meters\n2- Centimeters\n3- Millimeters\n4- Micrometers\n5- Kilometers\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if(choice==1||choice==2||choice==3||choice==4||choice==5&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val;
                    f=" m";
                    break;
                case 2:
                    ans=val*0.01;
                    f=" cm";
                    break;
                case 3:
                    ans=val*0.001;
                    f=" mm";
                    break;
                case 4:
                    ans=val*(1e-6);
                    f=" um";
                    break;
                case 5:
                    ans=val*1000;
                    f=" km";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans;
                    t=" m";
                    break;
                case 2:
                    ans=ans/0.01;
                    t=" cm";
                    break;
                case 3:
                    ans=ans/0.001;
                    t=" mm";
                    break;
                case 4:
                    ans=ans/(1e-6);
                    t=" um";
                    break;
                case 5:
                    ans=ans/1000;
                    t=" km";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }
}
void weight()
{
    clrscr();
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Gram\n2- Milligram\n3- Microgram\n4- Kilogram\n5- Tonne\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if(choice==1||choice==2||choice==3||choice==4||choice==5&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val;
                    f=" g";
                    break;
                case 2:
                    ans=val*.001;
                    f=" mg";
                    break;
                case 3:
                    ans=val*(1e-6);
                    f=" ug";
                    break;
                case 4:
                    ans=val*1000;
                    f=" kg";
                    break;
                case 5:
                    ans=val*(1e+6);
                    f=" Ton";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans;
                    t=" g";
                    break;
                case 2:
                    ans=ans/.001;
                    t=" mg";
                    break;
                case 3:
                    ans=ans/(1e-6);
                    t=" ug";
                    break;
                case 4:
                    ans=ans/1000;
                    t=" kg";
                    break;
                case 5:
                    ans=ans/(1e+6);
                    t=" Ton";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }
}
void fuel()
{
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Kilometers per Litre\n2- Litre per 100kilometer\n3- US Miles per gallon\n4- Mile per Litre\n5- Kilometer per gallon\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if(choice==1||choice==2||choice==3||choice==4||choice==5&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val;
                    f=" km/l";
                    break;
                case 2:
                    ans=val*100;
                    f=" l/100km";
                    break;
                case 3:
                    ans=val*.425144;
                    f=" mpg";
                    break;
                case 4:
                    ans=val*1.609344;
                    f=" mpl";
                    break;
                case 5:
                    ans=val*0.264172;
                    f=" km/gallon";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans;
                    t=" km/l";
                    break;
                case 2:
                    ans=ans/100;
                    t=" l/100km";
                    break;
                case 3:
                    ans=ans/.425144;
                    t=" mpg";
                    break;
                case 4:
                    ans=ans/1.609344;
                    t=" mpl";
                    break;
                case 5:
                    ans=ans/0.264172;
                    t=" km/gallon";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }
}
void volume()
{
    clrscr();
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Litre\n2- Millilitre\n3- CubicMetre\n4- CubicFoot\n5- Us Liquid Gallon\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if(choice==1||choice==2||choice==3||choice==4||choice==5&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val;
                    f=" l";
                    break;
                case 2:
                    ans=val*.001;
                    f=" ml";
                    break;
                case 3:
                    ans=val*1000;
                    f=" cm";
                    break;
                case 4:
                    ans=val*28.3168;
                    f=" cf";
                    break;
                case 5:
                    ans=val*3.78541;
                    f=" Gallon";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans;
                    t=" l";
                    break;
                case 2:
                    ans=ans/.001;
                    t=" ml";
                    break;
                case 3:
                    ans=ans/1000;
                    t=" cm";
                    break;
                case 4:
                    ans=ans/28.3168;
                    t=" cf";
                    break;
                case 5:
                    ans=ans/3.78541;
                    t=" Gallon";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }
}
void time()
{
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Second\n2- Millisecond\n3- Microsecond\n4- Minute\n5- Hour\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if((choice==1||choice==2||choice==3||choice==4||choice==5)&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val;
                    f=" sec";
                    break;
                case 2:
                    ans=val*0.001;
                    f=" msec";
                    break;
                case 3:
                    ans=val*(1e-6);
                    f=" microsec";
                    break;
                case 4:
                    ans=val*60;
                    f=" min";
                    break;
                case 5:
                    ans=val*3600;
                    f=" hr";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans;
                    t=" sec";
                    break;
                case 2:
                    ans=ans/0.001;
                    t=" msec";
                    break;
                case 3:
                    ans=ans/(1e-6);
                    t=" microsec";
                    break;
                case 4:
                    ans=ans/60;
                    t=" min";
                    break;
                case 5:
                    ans=ans/3600;
                    t=" hr";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }

}
void area()
{
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Square metre\n2- Square kilometre\n3- Square foot\n4- Acre\n5- Hectare\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if((choice==1||choice==2||choice==3||choice==4||choice==5)&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val;
                    f=" m2";
                    break;
                case 2:
                    ans=val*(1e+6);
                    f=" km2";
                    break;
                case 3:
                    ans=val*0.092903;
                    f=" foot2";
                    break;
                case 4:
                    ans=val*4046.86;
                    f=" acre";
                    break;
                case 5:
                    ans=val*10000;
                    f=" Hec";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans;
                    t=" m2";
                    break;
                case 2:
                    ans=ans/(1e+6);
                    t=" km2";
                    break;
                case 3:
                    ans=ans/0.092903;
                    t=" foot2";
                    break;
                case 4:
                    ans=ans/4046.86;
                    t=" acre";
                    break;
                case 5:
                    ans=ans/10000;
                    t=" Hec";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }
}
void temperture()
{
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Celsius\n2- Fahrenheit\n3- Kelvin\n4- Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==4||choice1==4)
        {
            exit(0);
        }
        if(choice==1)
        {
            if(choice1==1)
            {
                ans=val;
                t=" C";
            }
            if(choice1==2)
            {
                ans=val*9/5 + 32;
                t=" F";
            }
            if(choice1==3)
            {
                ans=val+273.15;
                t=" K";
            }
            f=" C";

        }
        else if(choice==2)
        {
            if(choice1==1)
            {
                ans=(val-32)*5/9;
                t=" C";
            }
            if(choice1==2)
            {
                ans=val;
                t=" F";
            }
            if(choice1==3)
            {
                ans=(val+459.67)*5/9;
                t=" K";
            }
            f=" F";

        }

        else if(choice==3)
        {
            if(choice1==1)
            {
                ans=val-273.15;
                t=" C";
            }
            if(choice1==2)
            {
                ans=val*9/5-459.67;
                t=" F";
            }
            if(choice1==3)
            {
                ans=val;
                t=" K";
            }
            f=" K";

        }
        else
        {
            error();
        }

            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }



}
void pressure()
{
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Atmosphere\n2- Bar\n3- Pascal\n4- Pound-force-psi\n5- Torr\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if((choice==1||choice==2||choice==3||choice==4||choice==5)&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val;
                    f=" atm";
                    break;
                case 2:
                    ans=val*0.986923;
                    f=" bar";
                    break;
                case 3:
                    ans=val*(9.8692e-6);
                    f=" pascal";
                    break;
                case 4:
                    ans=val*0.068046;
                    f=" pfpsi";
                    break;
                case 5:
                    ans=val*0.00131579;
                    f=" torr";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans;
                    t=" atm";
                    break;
                case 2:
                    ans=ans/0.986923;
                    t=" bar";
                    break;
                case 3:
                    ans=ans/(9.8692e-6);
                    t=" pascal";
                    break;
                case 4:
                    ans=ans/0.068046;
                    t=" pfpsi";
                    break;
                case 5:
                    ans=ans/0.00131579;
                    t=" torr";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }


}
void power()
{
    int choice,choice1;
    double val,ans;
    char *f,*t;
    while(1)
    {
        textcolor(YELLOW);
        printf("1- Watts\n2- Kilowatts\n3- Megawatts\n4- Gigawatts\n5- Horsepowers(international)\n6-Exit\n");
        printf("select from :");
        scanf("%d",&choice);
        printf("\nselect to :");
        scanf("%d",&choice1);
        printf("\nenter value: ");
        scanf("%lf",&val);
        if(choice==6||choice1==6)
        {
            exit(0);
        }
        if((choice==1||choice==2||choice==3||choice==4||choice==5)&&(choice1==1||choice1==2||choice1==3||choice1==4||choice1==5))
        {
            clrscr();
            switch(choice)
            {
                case 1:
                    ans=val;
                    f=" W";
                    break;
                case 2:
                    ans=val*1000;
                    f=" KW";
                    break;
                case 3:
                    ans=val*1000000;
                    f=" MW";
                    break;
                case 4:
                    ans=val*1000000000;
                    f=" GW";
                    break;
                case 5:
                    ans=val*745.699872;
                    f=" HP";
                    break;
            }
            switch(choice1)
            {
                case 1:
                    ans=ans;
                    t=" W";
                    break;
                case 2:
                    ans=ans/1000;
                    t=" KW";
                    break;
                case 3:
                    ans=ans/1000000;
                    t=" MW";
                    break;
                case 4:
                    ans=ans/1000000000;
                    t=" GW";
                    break;
                case 5:
                    ans=ans/745.699872;
                    t=" HP";
                    break;
            }
            printf(" %lf",val);
            printf(f);
            printf(" = %lf",ans);
            printf(t);
            getch();
            exit(0);

        }
        else
        {
            error();
        }

    }
}
void metric()
{
    int choice;
    while(1)
    {
        clrscr();
        textcolor(YELLOW);
        printf("1.Length\t2.Volume\t3.Weight\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:length();break;
        case 2:volume();break;
        case 3:weight();break;
        default:error();
        }
    }

}
