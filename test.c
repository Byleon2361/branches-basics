include <stdio.h>

int main()
{
    int max = 0;
    unsigned int res = 1;
    puts("Введите число: \n");
    scanf("%d", &max);
    for (int i = max; i > 0; i--)
    {
        res *= i;
    }
    printf("%d", res);
    return 0;
}
