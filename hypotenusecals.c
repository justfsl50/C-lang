#include<stdio.h>
#include<math.h>

int main()
{

double A;
double B;
double C;


printf("Enter side A: ");   
scanf("%lf", &A);

printf("Enter side B: ");
scanf("%lf", &B);

C = sqrt(A*A + B*B);

printf("The hypotenuse of the triangle is %lf", C);

return 0;


// // // Output: The hypotenuse of the triangle is 5.000000

// // // Hypotenuse Calculation in C:
// // // 1. The hypotenuse of a right-angled triangle can be calculated using the Pythagorean theorem.
// // // 2. The Pythagorean theorem states that the square of the hypotenuse is equal to the sum of the squares of the other two sides.
// // // 3. The sides of the triangle are taken as input from the user.
// // // 4. The hypotenuse of the triangle is calculated using the formula sqrt(A*A + B*B).
// // // 5. The calculated hypotenuse is displayed to the user.


//stynax for hypotenuse calculation
// C = sqrt(A*A + B*B);
// where A and B are the sides of the right-angled triangle and C is the hypotenuse.
// The sqrt() function is used to calculate the square root of the sum of the squares of the sides A and B.
// The calculated hypotenuse is displayed to the user using the printf() function.
// The value of the hypotenuse is displayed with a precision of 6 decimal places using the %lf format specifier.
// The return 0; statement is used to indicate the successful execution of the program.
// The main() function is used to define the entry point of the program.
// The program prompts the user to enter the sides A and B of the right-angled triangle.


}

