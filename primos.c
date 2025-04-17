#include <stdio.h>

int main(void){
    int seq, i, j, n, prim, ultim_primo, h, h2;
    scanf("%d", &seq);
    
    for (i = 1; i <= seq; i++){
        prim = 0;
        ultim_primo = 0;
        ultim_primo = 0;
        h = 0;
        h2 = 0;
        scanf("%d", &n);
        for (j = 2; j < n; j++){
            if (n % j == 0){
                prim = 1; 
            }
        }
        if (prim == 0){
            printf("%d é primo.\n", n);
        } else {
            for (h = n - 1; h >= 2; h--) {
                for (h2 = 2; h2 < h; h2++) {
                    if (h % h2 == 0) {
                        /*verificar depois se tem outro jeito de 
                        parar o loop sem forçar o index a sair da range*/
                        h2 = h;
                    }
                }
                if (h2 == h) {
                    ultim_primo = h;
                    /*verificar depois se tem outro jeito de 
                        parar o loop sem forçar o index a sair da range*/
                    h = 1;
                }
            }
            printf("%d não é primo, o primo anterior é %d.\n", n, ultim_primo);
        }

    }

    return 0;
}