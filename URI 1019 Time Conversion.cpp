#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, h, m, s;

    cin >> n;

    h = n / 3600;
    n = n % 3600;

    m = n / 60;
    n = n % 60;

    s = n;

    printf("%d:%d:%d\n", h, m, s);

    return 0;

}
