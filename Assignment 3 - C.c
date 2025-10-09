1. Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10 -->
#include <stdio.h>
void main()
{
    int i;
    
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
}




2. Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50  -->
#include <stdio.h>
void main()
{
    int i, n = 5;
    
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }
}




3. Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15 -->
#include <stdio.h>
void main()
{
    int start = 1, end = 5, i, sum = 0;

    for (i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}




4. Check the given number is prime or not.
Input: n = 7
Output: Prime
#include <stdio.h>
void main()
{
    int n = 7, i, count = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}




5. Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong  -->
#include <stdio.h>
void main()
{
    int n = 153, rem, sum = 0, temp;

    temp = n; 

    while (n > 0)
    {
        rem = n % 10;          
        sum = sum + (rem * rem * rem); 
        n = n / 10;            
    }

    if (temp == sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}




6. Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect  -->
#include <stdio.h>
void main()
{
    int n = 28, i, sum = 0;

    
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)  
            sum = sum + i; 
    }

    if (sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");
}




7. Find factorial of given number.
Input: n = 5
Output: 120  -->
#include <stdio.h>
void main()
{
    int n = 5, i;
    long fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %ld", n, fact);
}




8. Check the given number is Strong number or not.
Input: n = 145
Output: Strong  -->
#include <stdio.h>
void main()
{
    int n = 145, temp, rem, sum = 0, fact, i;

    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        fact = 1;

        for (i = 1; i <= rem; i++)
            fact = fact * i;

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == temp)
        printf("Strong");
    else
        printf("Not Strong");
}




9. Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome  -->
#include <stdio.h>
void main()
{
    int n = 121, temp, rev = 0, rem;

    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == temp)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}




10. Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)  -->
#include <stdio.h>
void main()
{
    int n = 12345, temp, last, first;

    temp = n;

    last = n % 10;

    while (n >= 10)
        n = n / 10;

    first = n;

    printf("Sum of first and last digit = %d", first + last);
}










