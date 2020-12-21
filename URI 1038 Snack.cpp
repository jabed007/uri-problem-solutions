#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x, y;
    double price, total_price;

    cin >> x >> y;

    switch(x)
    {
    case 1:
        price = 4.00;
        printf("Total: R$ %0.2lf\n", y * price);
        break;

    case 2:
        price = 4.50;
        printf("Total: R$ %0.2lf\n", y * price);
        break;

    case 3:
        price = 5.00;
        printf("Total: R$ %0.2lf\n", y * price);
        break;

    case 4:
        price = 2.00;
        printf("Total: R$ %0.2lf\n", y * price);
        break;

    case 5:
        price = 1.50;
        printf("Total: R$ %0.2lf\n", y * price);
        break;
    }

    return 0;
}
