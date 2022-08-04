#include <stdio.h>
#include <math.h>

int main()
{
    float n, x, sum = 0, tong = 0;
    printf("Nhap n: ");
    scanf("%f", &n);
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("S(n) = ");
    for (float i = 1; i <= n; i++)
    {
        if (i == n)
            printf("%.0f^%.0f/%.0f ", x, i, tong + i);
        else
            printf("%.0f^%.0f/%.0f + ", x, i, tong + i);
        tong += i;
        sum += (pow(x, i) / tong);
    }
    printf("= %.2f", sum);

    return 0;
}