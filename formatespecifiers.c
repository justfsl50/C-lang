#include<stdio.h>
int main()
{

    //format specifiers % = defines and formats a type of data to be displayed.
    //%d = integer
    //%f = float
    //%c = character
    //%s = string (array of characters)
    //%lf = double
    //%.1f = float with 1 decimal place
    //%.2f = float with 2 decimal places
    //%1= minimum field width
    //%-= left align
    //%+ = display + sign


float item1 = 10.52;
float item2 = 20.50;
float item3 = 30.59;

printf("item1: %.2f\n", item1);
printf("item2: %.2f\n", item2);
printf("item3: %.2f\n", item3);

return 0;
    
}