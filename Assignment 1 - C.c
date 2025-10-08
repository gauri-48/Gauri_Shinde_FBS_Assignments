1. Write a program to check whether a number is even or odd.  -->
#include <stdio.h>
void main() {
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    if (no % 2 == 0)
        printf("%d is even\n", no);
    else
        printf("%d is odd\n", no);
    return 0;
}




2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
void main() {
    int num, rev;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    if (num == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}




3. Write a program to check whether a given year is a leap year.
#include <stdio.h>
void main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    return 0;
}




4. Write a program to check whether a given character is a vowel or consonant.
#include <stdio.h>
void main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("%c is a vowel\n", ch);
    else
        printf("%c is a consonant\n", ch);
    return 0;
}




5. Write a program to check whether a person is eligible to vote (age ≥ 18). -->
#include <stdio.h>
void main() 
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote\n");
    else
        printf("You are not eligible to vote\n");
    return 0;
}




6. Write a program to check whether a given character is uppercase or lowercase. -->
#include <stdio.h>
void main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("%c is uppercase\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is lowercase\n", ch);
    else
        printf("Invalid");
    return 0;
}




7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively. -->
#include <stdio.h>
void main() 
{
    float basic, da, ta, hra, total;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000) 
	{
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } 
	else 
	{
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;
    printf("Total salary = %f\n", total);
    return 0;
}





