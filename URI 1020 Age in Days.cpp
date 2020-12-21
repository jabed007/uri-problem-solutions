#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int total_days, year, month, days;

    cin >> total_days;

    year = total_days / 365;
    total_days = total_days % 365;

    month = total_days / 30;
    total_days = total_days % 30;

    days = total_days;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", days);

    return 0;
}
