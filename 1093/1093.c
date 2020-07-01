#include <stdio.h>

int main() {
    int count = 0;
    int n[24] = { '\n'};

    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < count; i++) {
        printf("%d", n[i]);
    }

    return 0;
}