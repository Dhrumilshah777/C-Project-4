#include <stdio.h>

void main()
{
    int array[] = {10,20,30,40,50};

    int len = sizeof(array)/sizeof(array[0]);
    printf("Length of array is : %d\n",len);
}