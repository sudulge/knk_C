int find_largest(int a[], int n)
{
  int max;
  max = *a;
  for (int* p = a; p < a + n; p++)
    if (*p > max)
      max = *p;
  return max;
}