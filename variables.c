#include <stdio.h>

int main() {
    int age = 20;       //integer variable
    float marks = 90.5; //floating point variable
    char gpa = 'A';     // single character variable
    char name[] = "John"; //string variable

    printf("The age is %d\n", age);
    printf("The marks are %f\n", marks);
    printf("The gpa is %c\n", gpa);
    printf("The name is %s\n", name);

    return 0;
}

//variales = container to store data values.
//           allocated space in memory to store a value.
//           we refers a variable's name to access the stored  value.
//           That variabes now behaves as if it was the value it contains.
//           A variable is a way to represent a memory location in the computer where a value can be stored.
//           BUT we need to declare the type of data we are storing in the variable.


//Data types in C:
//1. int: integer
//2. char: character
//3. float: floating point number
//4. double: double precision floating point number
//5. void: special purpose type without any value.
//6. short int: integer
//7. long int: integer
//8. long double: double precision floating point number
//9. signed int: integer
//10. unsigned int: integer


/*int x; declaration of variable
x = 10;   initialization of variable
int x = 10;  declaration and initialization of variable*/

//Rules for naming variables:
//1. A variable name can only contain alphabets, numbers and underscores.
//2. A variable name cannot start with a number.
//3. A variable name cannot contain spaces.
//4. A variable name cannot be a keyword.
//5. A variable name is case sensitive.


