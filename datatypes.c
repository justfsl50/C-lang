#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age = 20;       //integer variable  %d
    float marks = 90.5; //floating point variable  %f
    char gpa = 'A';     // single character variable  %c
    char name[] = "John"; //string variable  %s
    bool isMale = true; //boolean variable  %d

    printf("The age is %d\n", age);
    printf("The marks are %f\n", marks);
    printf("The gpa is %c\n", gpa);
    printf("The name is %s\n", name);
    

}
//Output:The age is 20
//The marks are 90.500000
//The gpa is A
//The name is John



//float x = 10.5;    //4 bytes (32 bits of precision) 6-7 decimal digits %f
//double x = 10.5;   //8 bytes (64 bits of precision) 15-16 decimal digits %lf
//bool e = true;     //1 byte (true or false) %d
//char f= 100;        //1 byte (-227 to +227) %c or %d
//unsigned char g = 100; //1 byte (0 to 255) %c
//short int h = 100;    //2 bytes (-32768 to 32767) %d
//unsigned short int i = 100; //2 bytes (0 to 65535) %d
//long int j = 100;     //4 bytes (-2,147,483,648 to 2,147,483,647) %ld
//unsigned long int k = 100; //4 bytes (0 to 4,294,967,295) %lu
//long long int l = 100;  //8 bytes (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807) %lld
//unsigned long long int m = 100; //8 bytes (0 to 18,446,744,073,709,551,615) %llu

