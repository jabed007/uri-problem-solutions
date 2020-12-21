#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, D;

    cin >> a >> b >> c;
    D = (b * b) - 4 * a * c;
    if (a != 0 && D > 0) {
        D = sqrt(D);
        printf("R1 = %0.5lf\n", (-b + D) / (2 * a));
        printf("R1 = %0.5lf\n", (-b - D) / (2 * a));
    }
    else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
