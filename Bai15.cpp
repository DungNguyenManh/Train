#include <stdio.h>

int main()
{
    float n, sum = 0, tong = 0;
    printf("Nhap n: ");
    scanf("%f", &n);
    printf("S(n) = ");
    for (float i = 1; i <= n; i++)
    {
        if (i == n)
            printf("1/%.0f ", tong + i);
        else
            printf("1/%.0f + ", tong + i);
        tong += i;
        sum += 1 / tong;
    }
    printf("= %.2f", sum);

    return 0;
}