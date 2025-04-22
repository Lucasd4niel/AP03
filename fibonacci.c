#include <stdio.h>

int main() {
    int t, a, b, c, n, i, teste;
    
    scanf("%d", &t); 

    for(teste = 0; teste < t; teste++) {
        scanf("%d", &n); 
        a = 0;
        b = 1;
        for (i = 0; i < n; i++) {
            if (i == 0) {
                printf("%d", a);
            } else if (i == 1) {
                printf(", %d", b);
            } else {
                c = a + b;
                a = b;
                b = c;
                if (i % 2 != 0)
                    c = -c;

                printf(", %d", c);
            }
        }
        printf("\n");
    }

    return 0;
}
