#include <stdio.h>

int sumFirstLastDigit(int n)
{
    int first = n / 1000;
    int last = n % 10;
    return first + last;
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = sumFirstLastDigit(n);
    printf("%d\n", result);
    return 0;
}
