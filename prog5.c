//  Add Numbers Array
// 1 D array
#include <stdio.h>
int main()
{
    int array[10], sum = 0, n;

    printf("Enter the number:");
    scanf("%d", &n);

    printf("Enter %d number:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("Sum of all number : %d\n", sum);

    return 0;
}