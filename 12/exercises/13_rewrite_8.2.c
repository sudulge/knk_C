#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void) {
    double ident[N][N];
    double* p = ident[0];
    int zeros = N;

    while (p < ident[0] + N*N) {
        if (zeros == N) {
            *p++ = 1;
            zeros = 0;
        } else {
            *p++ = 0;
            zeros++;
        }
    }


    for (int i = 0; i < N; i ++) {
        for (int j = 0; j < N; j++) {
            printf("%f ", ident[i][j]);
        }
        printf("\n");
    }
}