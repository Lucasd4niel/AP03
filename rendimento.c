#include <stdio.h>

int main(void){
    int aporte, mes, acompanhamento, i;
    double saldo, t_invest, t_rendimento;

    saldo = 0;
    t_invest = 0;
    t_rendimento = 0;
    scanf("%d", &mes);
    scanf("%d", &acompanhamento);
    for(i = 1; i <= acompanhamento; i++){
        scanf("%d", &aporte);    
        saldo = saldo + aporte;
        
        if (aporte > 0){
            t_invest = t_invest + aporte;
        }

        if(mes > 12){
            mes = mes - 12;
        }
        
        switch (mes)
        {
            case 1:
                saldo = saldo * 1.01;
                t_rendimento = t_rendimento + (saldo * 0.01);
                printf("rendimento mes 1 %f", t_rendimento);
                break;
            case 8:
                saldo = saldo * 1.002;
                break;
            default:
                break;
        }
        mes = mes + 1;
        saldo =  saldo * 1.005;
        t_rendimento = t_rendimento + (saldo * 0.005);
    }
    printf("Saldo: %.2f\n", saldo);
    printf("Total Investido: %.2f\n", t_invest);
    printf("Rendimento Total: %.2f\n", t_rendimento);
    return 0;
}