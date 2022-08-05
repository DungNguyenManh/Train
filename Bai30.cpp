#include <stdio.h>

bool KT_SoHoanThien(int n);

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (KT_SoHoanThien(n))
        printf("%d la so hoan thien", n);
    else
        printf("%d ko phai la so hoan thien", n);

    return 0;
}

bool KT_SoHoanThien(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1;
    return 0;
}