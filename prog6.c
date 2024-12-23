
#include <stdio.h>
int Prime(int num)
{

    if (num <= 1)
    {

        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {

            return 0;
        }
    }

    return 1;
}
int main()
{
    int array[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < n; i++)
    {
        if (Prime(array[i]))
        {
            sum += array[i];
        }
    }
    printf("Sum is : %d", sum);
}