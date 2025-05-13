#include <stdio.h>

void printEvenIndices()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 2; i < N; i += 2)
    {
        printf("Index %d: %d\n", i, arr[i]);
    }
}

int main()
{
    printEvenIndices();
    return 0;
}
