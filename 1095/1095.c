#include <stdio.h>

int main() {
    int i = 0;
    int wow = 0, num = 0;
    int asdf[100] = { '\n' };
    
    scanf("%d", &num);
    
    wow = num;
    
    for (i = 0; i < num; i++) {
        scanf("%d", &asdf[i]);
        if (wow > asdf[i]) {
            wow = asdf[i];
        }
    }
    
    printf("%d\n", wow);
    
    return 0;
}

