for (int (*p)[24] = temperatures; p < temperatures + 7; p++) {
    int max;
    max = find_largest(*p, 24);
    printf("%d", max);
}