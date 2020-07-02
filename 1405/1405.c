#include <stdio.h>

int main() {
    int cnt = 0;
    int array[100] = {'\n'};

    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < cnt; i++) {
        for (int j = i; j < i + cnt; j++) {
            printf("%d ", array[j % cnt]);
        }   printf("\n");
    }

    return 0;
}