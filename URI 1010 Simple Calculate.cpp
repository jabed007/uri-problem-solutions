#include <iostream>

using namespace std;

int main()
{
    int product1, unit1, product2, unit2;
    double price1, price2, total_paid;

    cin>>product1>>unit1>>price1;
    cin>>product2>>unit2>>price2;

    total_paid = (unit1 * price1) + (unit2 * price2);
    printf("VALOR A PAGAR: R$ %0.2lf\n", total_paid);

    return 0;
}
