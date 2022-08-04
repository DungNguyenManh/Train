#include <stdio.h>

int main()
{
    int n, sum = 0, tich = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("S(n) = ");
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%d ", tich * i);
        else
            printf("%d + ", tich * i);
        tich *= i;
        sum += tich;
    }
    printf("= %d", sum);

    return 0;
}