#include <stdio.h>

int main() {
    int t, i, j, num, prim, seg, aux;

    scanf("%d", &t);
    if(t >= 1 && t <= 20){
        for(i = 1; i <= t; i++){
            scanf("%d", &num);
            prim = 0;
            seg = 1;
            if(num >= 1 && num <= 47){
                if(num == 1){
                    printf("%d", prim);
                }else{
                    if(num > 1){
                        printf("%d, %d",prim ,seg);
                        for(j = 3; j <= num; j++){
                            aux =  prim + seg;
                            prim = seg;
                            seg = aux;
                            if (j % 2 !=0){
                                printf(", %d", aux = aux * (-1));
                            }else{
                                printf(", %d", aux);
                            }
                        }
                    }
                }
                printf("\n");
            }
        }

    }
    return 0;
}