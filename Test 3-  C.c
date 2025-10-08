Question 1  -->
#include <stdio.h>
void main()
{
    int i;
    printf("Even Numbers Are: ");
    for(i = 1; i <= 20; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\nOdd Numbers Are: ");
    for(i = 1; i <= 20; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}




question 2  -->
#include <stdio.h>
void main()
{
    int sum = 0;
    int i;

    for(i = 1; i <= 9; i += 2) 
    {
        sum += i;
    }

    printf("Sum of alternate numbers from 1 to 9 is: %d\n", sum);

    return 0;
}









