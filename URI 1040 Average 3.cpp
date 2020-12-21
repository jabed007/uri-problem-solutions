#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double n1, n2, n3, n4, n5, avg, new_avg;

    cin >> n1 >> n2 >> n3 >> n4;
    avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);
    printf("Media: %0.1lf\n", avg);
    if (avg >= 7.0) {\
        printf("Aluno aprovado.\n");
    }
    if (avg < 5.0) {
        printf("Aluno reprovado.\n");
    }

    if (avg >= 5.0 && avg <= 6.9) {
        printf("Aluno em exame.\n");
        cin >> n5;
        printf("Nota do exame: %0.1lf\n", n5);
        new_avg = (avg + n5) / 2;
        if (new_avg >= 5.0) {
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1lf\n", new_avg);
        }
        if (new_avg < 4.9) {
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1lf\n", new_avg);
        }
    }

    return 0;
}
