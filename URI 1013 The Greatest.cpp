#include <iostream>
using namespace std;

int main()
{
    int a, b, c, temp;

    cin >> a >> b >> c;
    temp = a;
    if (a < b || a < c) {
        if (b < c) {
            temp = c;
        }
        else {
            temp = b;
        }
    }
    cout << temp << " eh o maior" << endl;

    return 0;
}
