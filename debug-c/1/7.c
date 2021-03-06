#include <math.h>
#include <stdio.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

int main()
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{ /*which can make c approach answer*/
    double a, b, c;
    a = -20;
    b = 20;
    c = (a + b) / 2;
    while (fabs(f(p, q, c)) >= EPSILON) {
        if (f(p, q, a) * f(p, q, c) < 0) { /*0 between a and c*/
            b = c;
        } else { /*0 between b and c*/
            a = c;
        }
        c = (a + b) / 2.0;
    }

    return c;
}

double f(int p, int q, double x)
{ /*calcalate value*/
    return p * x + q;
}