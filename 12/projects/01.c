#include <stdio.h>

int main() {

    printf("Enter a message: ");

    char array[100];
    char* p ;

    for (p = array; p < array + 100; p++) {
        *p = getchar();
        if (*p == '\n') {
            break;
        }
    }
    
    printf("Reversal is: ");
    
    for (p--; p >= array; p--) {
        printf("%c", *p);
    }

    return 0;
}