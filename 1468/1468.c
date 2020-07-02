#include <stdio.h>
int main()
{
    int a, b[100][100], c, i, j = 1, k = 1;
    scanf("%d", &a);
    for (c = 0; c < a; c++)
    {
        if (k == 1)
        {
            for (i = 0; i < a; i++)
            {
                b[c][i] = j;
                j++;
            }
            k--;
        }
        else
        {
            for (i = a - 1; i >= 0; i--)
            {
                b[c][i] = j;
                j++;
            }
            k++;
        }
    }
    for (c = 0; c < a; c++)
    {
        for (i = 0; i < a; i++)
        {
            printf("%d ", b[c][i]);
        }
        printf("\n");
    }
}

