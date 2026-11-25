#include <stdio.h>
#include <math.h>
int main()
{
    int
        n,
        i;
    float Un = 1.0f;
    printf("give a value for n :");
    scanf("%d", &n);
    if (n >= 0)
    {

        for (i = 1; i <= n; i++)
        {
            Un = 2 * sqrt(Un + 1) - 1;

            printf("U(%d) =>%.2f\n ", i, Un);
        }
    }
    else
    {

        printf("n must be either 0 or a postive number");
    }

    return 0;
}