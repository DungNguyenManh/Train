#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Uoc so cua %d la: ", n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nCo %d so la 'uoc so' cua %d", count, n);

    return 0;
}