#include <stdio.h>

void main()
{
    int arr[] = {12, 34, 5, 70, 22, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum value: %d\n", min);
}
