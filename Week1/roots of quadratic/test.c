#include <stdio.h>
#include <math.h>
int main()
{

    float a, b, c;
    printf("Enter a, b, c :");
    scanf("%f %f %f", &a, &b, &c);

    double d = b * b - 4 * a * c;

    if ((d > 0) || (d == 0))
    {
        //real roots

        float root1 = (-b + sqrt(d)) / (2 * a);
        float root2 = (-b - sqrt(d)) / (2 * a);
        printf("Real roots : %.2f, %.2f", root1, root2);
    }
    else
    {
        //imaginary roots
        d *= -1;
        float realPart = -b / 2 * a;
        double imaginaryPart = sqrt(d) / 2 * a;
        printf("Imaginary roots : %.2f + %.2fi, %.2f - %.2fi ", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    return 0;
}