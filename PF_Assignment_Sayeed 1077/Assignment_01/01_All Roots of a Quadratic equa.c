#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, d;

    printf("Please enter the values of a, b and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = (b * b) - 4 * a * c;

    if (d > 0){
        x1 = (- b + sqrt (d)) / (2 * a);
        x2 = (- b - sqrt (d)) / (2 * a);
        printf("The real roots = %.2lf %.2lf", x1, x2);
    }
    else if(d == 0){
        x1 = - b / (2 * a);
        x2 = - b / (2 * a);
        printf("Roots are equal = %.2lf %.2lf", x1, x2);
    }
    else {
        printf("Roots are imaginary");
    }

    return 0;

}
