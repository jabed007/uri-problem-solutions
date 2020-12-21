#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;
    if (B > C && D > A && (C + D) > (A + B))
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos";

    return 0;
}
