#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    int a = 1;
    int b = 1;
    int array[100][100] = { '\n' };

    scanf("%d %d", &x, &y);
    for (int i = x; i > 0; i--) {
        if (y % 2 == 1) {
            for (int j = 0; j < y; j++) {
                array[i][j] = a;
                a++; 
            }
        }

        else { 
            for (int j = y; j > 0; j--) {
                array[i][j] = a;
                a++;
            }
        }   b++;
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", array[i][j]);
        }   printf("\n");
    }
    return 0;
}