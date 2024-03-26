#include<stdio.h>

int main()
{
    char name[20];
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
  
   
   printf("what is your name: ");
    fgets("%s", name);
    printf("\nYour name is %s", name);

  printf("\nThe number entered by the user is %d", x);




    return 0;
}

// User input in C:
// 1. scanf() function is used to take input from the user.
// 2. It is defined in stdio.h header file.
// 3. It is used to read the value of a variable from the user.
// 4. It is used with the '&' operator which is also known as the address of operator.
// 5. The '&' operator is used to get the address of a variable.

// Syntax:
// scanf("format specifier", &variable);

// format specifier:
// %d: integer
// %f: float
// %c: character
// %s: string
// %lf: double
// %.1f: float with 1 decimal place
// %.2f: float with 2 decimal places
// %1: minimum field width  
// %-: left align


//fgets() function is used to take input from the user.it also reads spaces and new line character.