#include <stdio.h>
#include <ctype.h>

int main() {

    char array[100];
    char* p;
    char ch;
    char terminating;
    char* head;
    char* tail;

    printf("Enter a sentence: ");

    for (tail = array; tail < array + 100;) {
        ch = getchar();
        if (ch == '\n') break;

        if (ch == '.' || ch == '?' || ch == '!') {
            terminating = ch;
        }
        else {
            *tail++ = ch;
        }
    }
    head = tail;

    while(1) {
        head--;
        if (*head == ' '){
            for (p = head+1; p < tail; p++) {
                putchar(*p);
            }
            putchar(' ');
            tail = head;
        }
        else if (head == array) {
            for (p = head; p < tail; p++) {
                putchar(*p);
            }
            putchar(terminating);
            break;
        }
    }

    return 0;
}