#include <stdio.h>

int main() {
    int count = 0;
    int array[500] = { '\n' };
    
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        scanf("%d", &array[i]);
    }
    
    for (int j = count; j >= 1; j--) {
        printf("%d ", array[j]);
    }  // printf("\n");
    return 0;
}