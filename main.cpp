#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    printf("Enter a,b,c with spaces (example: 1 6 9)\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Infinity of roots\n");
            }
            else
            {
            printf("No roots\n");
            }
        }
        else
        {
            double x = -c/b;
            printf("This equation is not square, but there is 1 root: %lf\n", x);
        }
    }
    else
    {
        float d = b*b - 4*a*c;
        if (d > 0)
        {
            double x1 = (-b+sqrt(d))/2/a;
            double x2 = (-b-sqrt(d))/2/a;
            printf("2 roots: %lf, %lf\n", x1, x2);
        }
        else if (d == 0)
        {
            double x = -b/2/a;
            printf("1 root: %lf\n", x);
        }
        else
        {
            printf("No roots\n");
        }
    }
}
