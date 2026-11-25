#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{

    printf("hi\n");

    printf("wsp\n");

    int age = 17;

    int year = 2009;

    printf("how r u doing . r u %d \n ", age);

    printf("yes siiiir i was born in %d \n", year);

    float bac = 15.16;
    printf("yes i got %.2f/20 in my bac \n", bac);

    char fac[] = "usthb";

    printf("great what ab %s have u joined it \n", fac);
    char slave[] = "hell naaaah";

    printf("ah %s i aint joining that damned place\n", slave);

    bool inusthb = false;

    if (inusthb)
    {
        printf("in usthb");
    }
    else
    {
        printf("im a student in la fac centrale\n");
    }
    double e = 2.7108876;
    printf("the value of e is %lf\n", e);
    int ages;
    printf("how old are you:");
    scanf("%d", &ages);
    float gpa = 0.0f;
    printf("enter your gpa: ");
    scanf("%F", &gpa);
    char grade = '\0';

    printf("what is your grade:");
    scanf(" %c", &grade);
    getchar();

    printf("%d\n", ages);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}