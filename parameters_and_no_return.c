#include <stdio.h>

void printRange(int n)
{
    if (n >= 0)
    {
        for (int i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = n; i <= -n; i++)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int num;
    scanf("%d", &num);
    printRange(num);
    return 0;
}
