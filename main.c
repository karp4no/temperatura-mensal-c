/* ============================================================
 * PROGRAMA: Analisador de Temperatura Mensal com Gráfico ASCII
 * DISCIPLINA: Algoritmos e Pensamento Computacional
 * AUTOR: Rodrigo Bernardo
 * ============================================================ */

#include <stdio.h>

#define DIAS 30

int main() {
    // Vetor de 30 posições para armazenar as temperaturas do mês
    float temperaturas[DIAS];
    float soma = 0.0, media = 0.0;
    float maior, menor;
    int diaMaior = 1, diaMenor = 1;
    int i;

    // --- CABEÇALHO DO SISTEMA ---
    printf("==================================================\n");
    printf("       ANALISADOR DE TEMPERATURA MENSAL (30 DIAS) \n");
    printf("==================================================\n");
    printf("Insira a temperatura maxima registrada para cada dia.\n");
    printf("==================================================\n\n");

    // --- LEITURA E ARMAZENAMENTO NO VETOR ---
    for (i = 0; i < DIAS; i++) {
        printf("Digite a temperatura do dia %2d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        
        // Acumula valores para o cálculo da média
        soma += temperaturas[i];

        // Regra de negócio: Identificação da maior e menor temperatura
        if (i == 0) {
            maior = temperaturas[i];
            menor = temperaturas[i];
            diaMaior = 1;
            diaMenor = 1;
        } else {
            if (temperaturas[i] > maior) {
                maior = temperaturas[i];
                diaMaior = i + 1;
            }
            if (temperaturas[i] < menor) {
                menor = temperaturas[i];
                diaMenor = i + 1;
            }
        }
    }

    // --- CÁLCULO ESTATÍSTICO ---
    media = soma / DIAS;

    // --- RELATÓRIO CONSOLIDADO ---
    printf("\n==================================================\n");
    printf("               RELATORIO ESTATISTICO              \n");
    printf("==================================================\n");
    printf(" Temperatura media do mes: %.2f C\n", media);
    printf(" Temperatura maxima:       %.2f C (Dia %d)\n", maior, diaMaior);
    printf(" Temperatura minima:       %.2f C (Dia %d)\n", menor, diaMenor);
    printf("==================================================\n");

    // --- DESAFIO BÔNUS: GRÁFICO DE TENDÊNCIA EM TEXTO (ASCII) ---
    printf("\n==================================================\n");
    printf("          GRAFICO DE TENDENCIA (TEXTO)            \n");
    printf("==================================================\n");
    
    for (i = 0; i < DIAS; i++) {
        printf("Dia %2d [%5.1f C]: ", i + 1, temperaturas[i]);
        
        // Converte a temperatura em barra proporcional de asteriscos
        int asteriscos = (int)(temperaturas[i] / 2.0);
        if (asteriscos < 1) asteriscos = 1;
        
        for (int j = 0; j < asteriscos; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("==================================================\n");
    printf("Fim do processamento. Obrigado por utilizar o sistema!\n");

    return 0;
}
