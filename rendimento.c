#include <stdio.h>

int main(void){
    int mes, acompanhamento, i;
    float aporte, saldo, t_invest, t_rendimento, r;
    saldo = 0.0;
    t_invest = 0.0;
    t_rendimento = 0.0;

    scanf("%d %d", &mes, &acompanhamento);
    
    if (mes >= 1 && mes <= 12 && acompanhamento > 0){
        for(i = 1; i <= acompanhamento; i++){
            if (mes > 12){
                mes = mes - 12;
            }
            if (saldo > 0){
                switch (mes){
                case 1:
                    r =  saldo * 0.015;
                    saldo = saldo + r;
                    t_rendimento = t_rendimento + r;
                    break;
                case 8:
                    r = saldo * 0.003;
                    saldo = saldo + r;
                    t_rendimento =  t_rendimento + r;
                    break;
                default:
                    r = saldo * 0.005;
                    saldo = saldo + r;
                    t_rendimento = t_rendimento + r;
                    break;
                }
            }
            scanf("%f", &aporte);
            saldo = saldo + aporte;
            if (aporte > 0){
                t_invest =  t_invest + aporte;
            }
            mes = mes + 1;
        }
    }
        
    printf("Saldo: %.2f\n", saldo);
    printf("Total Investido: %.2f\n", t_invest);
    printf("Rendimento Total: %.2f\n", t_rendimento);
    return 0;
}