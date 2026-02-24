double inner_product(const double *a, const double *b, int n) {
    double sum;
    
    for (int i = 0; i < n; i++) {
        sum += *(a + i) * *(b + i);       < 이거 우선순위
        }

        return sum;
}