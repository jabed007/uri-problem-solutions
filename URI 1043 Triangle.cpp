#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b) {
        printf("Perimetro = %0.1lf\n", a + b + c);
    }
    else {
        printf("Area = %0.1lf\n", ((a + b) * c) / 2);
    }

    return 0;
}
