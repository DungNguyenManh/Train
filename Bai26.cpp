#include <stdio.h>

int main()
{
    int n, tich = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Uoc so cua %d la: ", n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }

    printf("\nUoc so le cua %d la: ", n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            printf("%d ", i);
            tich *= i;
        }
    }
    printf("\nTich cac uoc so le cua %d la: %d", n, tich);

    return 0;
}