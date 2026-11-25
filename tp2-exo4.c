#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, c;
    float a, f = 0.0;
    printf("give a value for n in degree :");
    scanf("%d", &n);
    printf(" give a value for a :");
    scanf("%f", &a);
    float m = 0.0;
    int s = 0;
    for (i = 0; i < n; i++)
    {
        f = (150 * sin(i * (M_PI / 180))) / (i + 1);

        if (m < f)
        {
            m = f;
        }

        if (f <= a && f >= -a)
        {
            s++;
        }
    }
    do
    {
        printf(" enter 1 if you wanted to see the maximum value of F(i)\nenter 2 to know the number of values in F(i):");
        scanf("%d", &c);
        if (c == 1)
        {
            printf("the max of F(i):%.f", m);
        }

        if (c == 2)
        {
            printf("the number of values in F(i) between +a and -a is : %d", s);
        }
        if (c < 1 || c > 2)
        {

            printf("c must be either 1 or 2");
        }
    } while (c < 1 || c > 2);
    return 0;
}