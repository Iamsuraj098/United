/*
  According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard
    write a program to find out what is the day on 1st January of this year
  */
#include <stdio.h>
void main()
{
    int year, day;
    printf("enter the year: ");
    scanf("%d", &year);
    printf("date of the day is 01/01/%d\n", year);

    if (1900 <= year <= 1999)
    {
        day = (1 + 0 + 0 + (year - 1900) + (year - 1900) / 4) % 7;
    }
    else if (2000 <= year <= 2099)
    {
        day = (1 + 0 + 6 + (year - 2000) + (year - 2000) / 4) % 7;
    }
    else if (2100 <= year <= 2199)
    {
        day = (1 + 0 + 4 + (year - 2100) + (year - 2100) / 4) % 7;
    }
    else if (2200 <= year <= 2299)
    {
        day = (1 + 0 + 2 + (year - 2200) + (year - 2200) / 4) % 7;
    }
    else if (2300 <= year <= 2399)
    {
        day = (1 + 0 + 0 + (year - 2300) + (year - 2300) / 4) % 7;
    }
    else
    {
        printf("please enter the year between 1900 - 2399 ");
    }
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            if (year % 400 != 0)
            {
                day = day - 1;
            }
        }
    }
    else
    {
        printf("Entered year is not leap year. \n");
    }
    switch (day)
    {
    case 0:
        printf("Day : Sunday");
        break;
    case 1:
        printf("Day : Monday");
        break;
    case 2:
        printf("Day : Tuesday");
        break;
    case 3:
        printf("Day : Wednesday");
        break;
    case 4:
        printf("Day : Thursday");
        break;
    case 5:
        printf("Day : Friday");
        break;
    case 6:
        printf("Day : Saturday");
        break;

    default:
        printf("invalid");
        break;
    }
}