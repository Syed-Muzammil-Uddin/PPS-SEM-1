#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, d, root1, root2, real, imag;

    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different \n");
        printf("root1 = %.2lf\n", root1);
        printf("root2 = %.2lf\n", root2);
    }
    else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal \n");
        printf("root1 = root2 = %.2lf\n", root1);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Roots are complex and different\n");
        printf("root1 = %.2lf + %.2lfi\n", real, imag);
        printf("root2 = %.2lf - %.2lfi\n", real, imag);
    }

    return 0;
}

