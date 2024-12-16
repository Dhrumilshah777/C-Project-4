#include <stdio.h>
void main()
{
    int arra_A[5] = {10, 20, 30, 40, 50};
    int arra_B[5] = {10, 20, 30, 40, 50};
    int arra_C[5];

    // arra_C[0] = arra_A[0] + arra_B[0];
    // arra_C[1] = arra_A[1] + arra_B[1];
    // arra_C[2] = arra_A[2] + arra_B[2];
    // arra_C[3] = arra_A[3] + arra_B[3];
    // arra_C[4] = arra_A[4] + arra_B[4];
    // arra_C[5] = arra_A[5] + arra_B[5];

    for (int i = 0; i < 5; i++)
    {
        arra_C[i] = arra_A[i] + arra_B[i];
        printf("%d\n", arra_C[i]);
       
    }
}