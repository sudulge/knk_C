#define N 10
double ident[N][N];
double* p;
int n = N;

for (p = &ident[0][0]; p < &ident[0][0] +  N*N; p++) {
    if (n == N) {
        *p = 1.0;
        n = 0
    }
    else {
        *p = 0.0
        n++;
    }
}