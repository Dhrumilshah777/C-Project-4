#include <stdio.h>

void main()
{
    int avg, sum, marks[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);

        sum = sum + marks[i];

        avg = sum / 5;
    }
    printf("the sum is :%d\n", sum);
    printf("the avg is :%d\n", avg);
    
}