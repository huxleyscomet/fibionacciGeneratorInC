#include <stdio.h>

int main() {
    int first, second, next, range;
    first = 0;
    second = 1;
    scanf_s("%d", &range);

    for (int i = 1; i <= range; i++) {
        next = second + first;
        printf("%d\n", next);
        first = second;
        second = next;
    }
}
