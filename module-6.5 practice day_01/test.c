#include <stdio.h>

int main()
{
    int n, i, t, count;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count = 0;

            for (t = 1; t <= i; t++)
            {
                if (i % t == 0)
                {
                    count++;
                }
            }

            if (count == 2)
            {
                printf("%d ", i);
            }
        }
    }

        return 0;
}