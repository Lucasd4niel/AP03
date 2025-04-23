#include <stdio.h>

int main(void){
    int mes, acompanhamento, i;
    double aporte, saldo, t_invest, t_rendimento, taxa, r;
    saldo = 0.0;
    t_invest = 0.0;
    t_rendimento = 0.0;
    scanf("%d %d", &mes, &acompanhamento);
    if (mes >=1 && mes <=12 && acompanhamento >0){
        for(i = 1; i <= acompanhamento; i++){
            if (mes > 12){
                mes = mes - 12;
            }
            if (saldo > 0){
                r = saldo * 0.005;
                saldo = saldo + r;
                t_rendimento = t_rendimento + r;
                if (mes == 1){
                    r =  saldo * 0.01;
                    saldo = saldo + r;
                    t_rendimento = t_rendimento + r;
                }
                if(mes == 8){
                    taxa = saldo * 0.002;
                    saldo = saldo - taxa;
                }    
            }
            scanf("%lf", &aporte);
            saldo = saldo + aporte;
            if (aporte > 0){
                t_invest =  t_invest + aporte;
            }
            mes++;
        }
    }
        
    printf("Saldo: %.2f\n", saldo);
    printf("Total Investido: %.2f\n", t_invest);
    printf("Rendimento Total: %.2f\n", t_rendimento);
    return 0;
    /**/
}