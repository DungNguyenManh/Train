#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Uoc so cua %d la: ", n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}