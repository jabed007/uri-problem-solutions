#include <iostream>

using namespace std;
#define pi 3.14159

int main()
{
    int R;
    double volume;

    cin>>R;
    volume = (4 / 3.0) * pi * R * R * R;
    printf("VOLUME = %0.3lf\n", volume);

    return 0;
}
