#include <stdio.h>

int main()
{
    int arr[] = {12, 34, 5, 70, 22, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);

    return 0;
}
