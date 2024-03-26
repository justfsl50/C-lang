#include <stdio.h>

int main()
{

    const double pi = 3.14159;
    double r;
    double circumference;
    double area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    circumference = 2 * pi * r;
    area = pi * r * r;

    printf("The circumference of the circle is %lf", circumference);
    printf("\nThe area of the circle is %lf", area);

    return 0;
}
// // Output: the circumference of the circle is 31.415900

// // Circle in C:
// // 1. The circumference of a circle is given by the formula 2 * pi * r.
// // 2. The value of pi is 3.14.
// // 3. The radius of the circle is taken as input from the user.
// // 4. The circumference of the circle is calculated using the formula.
// // 5. The calculated circumference is displayed to the user.

// // Note: The value of pi is taken as 3.14. It is an approximate value of pi. The actual value of pi is 3.14159. The value of pi can be taken as 3.14159 for more accurate calculations.