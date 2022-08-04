#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("S(n) = ");
    for (float i = 1; i <= n; i++)
    {
        if (i == n)
            printf("1/%.0f ", 2 * i);
        else
            printf("1/%.0f + ", 2 * i);
        sum += 1 / (2 * i);
    }
    printf("= %.2f", sum);

    return 0;
}