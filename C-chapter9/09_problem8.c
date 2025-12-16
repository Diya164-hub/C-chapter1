/* Write a structure capable of storing data. 
Write a function to comprare those dates.*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int compare(struct Date d1, struct Date d2)
{
    if((d1.year == d2.year) && (d1.month == d2.month) && (d1.day == d2.day))
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
int main(){
    struct Date d1 = {12, 5, 2004};
    struct Date d2 = {15, 4, 2012};
    printf("%d", compare(d1, d2));
    
    return 0;
}