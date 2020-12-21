#include <iostream>

using namespace std;

int main()
{
    string name;
    double salary, total_sale, total_salary;

    cin >> name;
    cin >> salary >> total_sale;
    total_salary = salary + (total_sale * 15 / 100);
    printf("TOTAL = R$ %0.2lf\n", total_salary);

    return 0;
}

