#include <stdio.h>

int main()
{
    int employee_number, worked_hours;
    double amount_per_hour;

    scanf("%d %d %lf", &employee_number, &worked_hours, &amount_per_hour);
    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %0.2lf\n", worked_hours * amount_per_hour);

    return 0;
}
