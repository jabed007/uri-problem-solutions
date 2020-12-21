#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double time, avg_speed;

    cin >> time >> avg_speed;
    printf("%0.3lf\n", (time * avg_speed) / 12);

    return 0;
}
