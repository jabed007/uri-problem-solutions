#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a[3], b[3], i, j, n, min_index, temp;

    for (i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    for (i = 0; i < 3 - 1; i++) {
        min_index = i;
        for (j = i + 1; j < 3; j++) {
            if (a[min_index] > a[j]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%d\n", a[i]);
    }
    printf("\n");

    for (i = 0; i < 3; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}
