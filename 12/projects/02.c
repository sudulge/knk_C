// 코드는 정상적으로 동작하지만 배열의 첫 주소보다 이전값 array - 1 을 포인터가 가리키는 UB 문제가 있다.
#include <stdio.h>
#include <ctype.h>

int main() {
    
    char array[100];
    char* head = array;
    char* tail;
    char ch;

    printf("Enter a message: ");

    for (tail = array; tail < array + 100;) {
        ch = getchar();
        if (ch == '\n') {
            break;
        }

        if (isalpha(ch)) {
            *tail++ = tolower(ch);
        }
    }

    tail--;

    while(1) {
        if (*head != *tail) {
            printf("Not a palindrome");
            break;
        }
        if (tail - head <= 1) {
            printf("Palindrome");
            break;
        }
        head++;
        tail--;
    }

    return 0;
}