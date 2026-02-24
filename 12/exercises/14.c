int temperatures[7][24];
bool search(const int a[], int n, int key) {
    for (int* p = a; p < a + n; p++) {
        if  (*p == key) {
            return true;
        }
    }
        return false;
}
a = search(temperatures[0], 168, 32);