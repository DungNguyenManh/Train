#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    printf("Nhap mu n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    int mu = pow(x, n);
    printf("T(%d,%d) = %d", x, n, mu);

    return 0;
}