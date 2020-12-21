#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int total_money;

    cin >> total_money;
    cout << total_money << endl;
    printf("%d nota(s) de R$ 100,00\n", total_money / 100);
    total_money = total_money % 100;

    printf("%d nota(s) de R$ 50,00\n", total_money / 50);
    total_money = total_money % 50;

    printf("%d nota(s) de R$ 20,00\n", total_money / 20);
    total_money = total_money % 20;

    printf("%d nota(s) de R$ 10,00\n", total_money / 10);
    total_money = total_money % 10;

    printf("%d nota(s) de R$ 5,00\n", total_money / 5);
    total_money = total_money % 5;

    printf("%d nota(s) de R$ 2,00\n", total_money / 2);
    total_money = total_money % 2;

    printf("%d nota(s) de R$ 1,00\n", total_money / 1);

    return 0;
}
