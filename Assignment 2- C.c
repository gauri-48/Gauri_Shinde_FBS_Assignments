1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.  -->
#include<stdio.h>
void main()
{
	int no1, no2;
	printf("Enter no1: ");
	scanf("%d", &no1);
	printf("\nEnter no2: ");
	scanf("%d", &no2);
	
	int sum = no1 + no2;
	printf("\nAddition is: %d", sum);
	
	int minus = no1 - no2;
	printf("\nSubstraction is: %d", minus);
	
	int div = no1/no2;
	printf("\nDivision is: %d", div);
	
	int mult = no1*no2;
	printf("\nMultiplication is: %d", mult);
	
	int remin = no1%no2;
	printf("\nReminder is: %d", remin);
	
}




2. Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.  -->
#include <stdio.h>
void main()
{
    int a, b, c;
    
    printf("Enter three sides of a triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("Triangle is Equilateral.");
    else if (a == b || b == c || a == c)
        printf("Triangle is Isosceles.");
    else
        printf("Triangle is Scalene.");
}




3. Write a program to find greatest of three numbers using nested if-else.  -->
#include <stdio.h>
void main()
{
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("Greatest number is: %d", a);
        else
            printf("Greatest number is: %d", c);
    }
    else
    {
        if (b > c)
            printf("Greatest number is: %d", b);
        else
            printf("Greatest number is: %d", c);
    }
}




4. Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 → show "Distinction"
If marks are more than 65 → show "First Class"
If marks are more than 55 → show "Second Class"
If marks are 40 or more → show "Pass Class"
If marks are less than 40 → show "Fail"  -->
#include <stdio.h>
void main()
{
    int marks;
    
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 75)
        printf("Distinction");
    else if (marks > 65)
        printf("First Class");
    else if (marks > 55)
        printf("Second Class");
    else if (marks >= 40)
        printf("Pass Class");
    else
        printf("Fail");
}




5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.  -->
#include <stdio.h>
void main()
{
    float price, discount, final_price;
    char student;

    printf("Enter the total price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);   // space before %c to ignore newline

    if (student == 'y' || student == 'Y')
    {
        if (price > 500)
            discount = price * 0.20;  
        else
            discount = price * 0.10; 
    }
    else
    {
        if (price > 600)
            discount = price * 0.15;  
        else
            discount = 0;             
    }

    final_price = price - discount;

    printf("Discount: %.2f\n", discount);
    printf("Final price to pay: %.2f", final_price);
}




6. Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)  -->
#include <stdio.h>
void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        printf("Divisible by both");
    else if (num % 3 == 0)
        printf("Divisible by 3 but not by 5");
    else if (num % 5 == 0)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}




7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)  -->
#include <stdio.h>
void main()
{
    int age;
    
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 12)
        printf("Child");
    else if (age >= 12 && age <= 19)
        printf("Teenager");
    else if (age >= 20 && age <= 59)
        printf("Adult");
    else
        printf("Senior");
}

























