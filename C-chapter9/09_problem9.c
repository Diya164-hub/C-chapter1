/* Solve problem 8 for time using 'typdef' keyword */

#include <stdio.h>

typedef struct Date
{
    int day;
    int month;
    int year;
} DT;

int compare(DT d1, DT d2)
{
    if ((d1.year == d2.year) && (d1.month == d2.month) && (d1.day == d2.day))
    {
        return 0;
    }
    if (d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.year < d2.year)
    {
        return -1;
    }
    else if (d1.month > d2.month)
    {
        return 1;
    }
    else if (d1.month < d2.month)
    {
        return -1;
    }
    else if (d1.day > d2.day)
    {
        return 1;
    }
    else if (d1.day < d2.day)
    {
        return -1;
    }
}
int main()
{
    DT d1 = {12, 5, 2004};
    DT d2 = {15, 4, 2004};
    printf("%d", compare(d1, d2));

    return 0;
}