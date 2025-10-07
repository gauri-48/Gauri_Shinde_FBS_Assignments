1. Write a C program to add two integers and display the result. -->
#include <stdio.h>
void main()
{
	int a = 10;
	int b = 20;
	int sum = a + b;
	printf("Sum of two integers is: %d", sum);
}




2. Write a C program to find the area of a circle. -->
#include <stdio.h>
void main()
{
	int r = 4;
	float area = 3.14 * r * r;
	printf("Area Of Circle: %f", area); 
}




3. Write a C program to convert temperature from Celsius to Fahrenheit using the
formula:
F = (C *9/5) + 32  -->
void main()
{
	float celsius, fahrenheit;

	printf("Enter Temperature In Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius *9/5) + 32;
	printf("Temperature in Fahrenheit: %f", fahrenheit);
}




4. Write a C program to swap two numbers using a temporary third variable.  -->
#include <stdio.h>
void main()
{
    int a = 5, b = 10, temp;

    temp = b;
    b = a;
    a = temp;

    printf("After swapping: a = %d, b = %d", a, b);
}




5. Write a C program to input five numbers and find their average.  -->
#include <stdio.h>
void main()
{
    int a, b, c, d, e;
    float average;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    average = (a + b + c + d + e) / 5;

    printf("Average: %f", average);
}




6. Write a C program to find the square and cube of a given number.  -->
#include <stdio.h>
void main()
{
    int no, square, cube;

    printf("Enter a number: ");
    scanf("%d", &no);

    square = no * no;
    cube = no * no * no;

    printf("Square: %d\n", square);
    printf("Cube: %d", cube);
}




7. Write a C program to convert given minutes into hours and remaining minutes.  -->
#include <stdio.h>
void main()
{
    int minutes, hours, remaining;

    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remaining = minutes % 60;

    printf("Hours = %d, Minutes = %d", hours, remaining);
}




8. Write a C program to input the length and width of a rectangle and find its perimeter.  -->
#include <stdio.h>
void main()
{
    int length, width, perimeter;

    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &length, &width);

    perimeter = 2 * (length + width);

    printf("Perimeter of rectangle: %d", perimeter);
}




9. Write a C program to input the base and height of a triangle and calculate its area.  -->
#include <stdio.h>
void main()
{
    float base, height, area;

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("Area of triangle: %.2f", area);
}




10. Write a C program to input marks of five subjects, find the total marks, and calculate
the percentage.  -->
#include <stdio.h>
void main()
{
	int subj1, subj2, subj3, subj4, subj5;
	printf("Enter The Marks Of Five Subjects: ");
	scanf("%d %d %d %d %d", &subj1, &subj2, &subj3, &subj4, &subj5);
	
	int total = subj1 + subj2 + subj3 + subj4 + subj5;
	float percentage = (total/5);
	
	printf("Total Marks: %d, Percentage: %f", total , percentage);
}





















