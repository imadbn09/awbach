#include <stdio.h>
int main()
{
              int x, i, n = 0;
              printf("how many lines do you want:");
              scanf("%d", &n);
              for (i = 1; i <= n; i++)
              {
                            for (x = 1; x <= i; x++)
                            {
                                          printf("*");
                            }

                            printf("\n");
              }
              return 0;
}