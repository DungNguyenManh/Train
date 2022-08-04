#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("S(n) = ");
    for (float i = 0; i <= n; i++)
    {
        if (i == n)
            printf("%.0f/%.0f ", (2 * i + 1), (2 * i + 2));
        else
            printf("%.0f/%.0f + ", (2 * i + 1), (2 * i + 2));
        sum += (2 * i + 1) / (2 * i + 2);
    }
    printf("= %.2f", sum);

    return 0;
}