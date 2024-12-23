
#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, add = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            add += arr[i];
        }
    }
    printf("Even Number :%d", add);
}