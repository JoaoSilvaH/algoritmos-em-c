Meu Drive
#include <stdio.h>

int main() {
    float vendas[12][4];
    float totalMes[12] = {0}, totalSemana[4] = {0}, totalAno = 0;
    int mes, semana, mesMaior;
    float maior;

    // Leitura da matriz
    for (mes = 0; mes < 12; mes++) {
        printf("\nDigite as vendas do mês %d:\n", mes+1);
        for (semana = 0; semana < 4; semana++) {
            printf("Semana %d: ", semana+1);
            scanf("%f", &vendas[mes][semana]);
        }
    }

    // a) Total por mês
    for (mes = 0; mes < 12; mes++) {
        for (semana = 0; semana < 4; semana++) {
            totalMes[mes] += vendas[mes][semana];
        }
        printf("Total do mês %d: %.2f\n", mes+1, totalMes[mes]);
    }

    // b) Total por semana
    for (semana = 0; semana < 4; semana++) {
        for (mes = 0; mes < 12; mes++) {
            totalSemana[semana] += vendas[mes][semana];
        }
        printf("Total da semana %d: %.2f\n", semana+1, totalSemana[semana]);
    }

    // c) Total do ano
    for (mes = 0; mes < 12; mes++) {
        totalAno += totalMes[mes];
    }
    printf("\nTotal do ano: %.2f\n", totalAno);

    // d) Mês com maior venda
    maior = totalMes[0];
    mesMaior = 1;
    for (mes = 1; mes < 12; mes++) {
        if (totalMes[mes] > maior) {
            maior = totalMes[mes];
            mesMaior = mes+1;
        }
    }
    printf("Mês com maior venda: %d (%.2f)\n", mesMaior, maior);

    return 0;
}