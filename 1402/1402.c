#include <stdio.h>

int main() {
    int cnt = 0;
    int array[100] = { '\n' };

    scanf("%d", &cnt); 
    
    for (int i = 0; i < cnt; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = cnt - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}