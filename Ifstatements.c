#include<stdio.h>

int main()
{
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are now signed up.");
    }
    else
    {
        printf("You can't sign up! You are just Born");
    }
}