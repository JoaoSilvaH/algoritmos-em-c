Meu Drive
#include <stdio.h>

int main() {
    char respostas[10][5];   // 10 questões, 5 alunos
    char gabarito[10];
    int resultado[5] = {0};
    int aluno, questao;

    // Leitura das respostas
    for (aluno = 0; aluno < 5; aluno++) {
        printf("\nDigite as respostas do aluno %d:\n", aluno+1);
        for (questao = 0; questao < 10; questao++) {
            printf("Questão %d: ", questao+1);
            scanf(" %c", &respostas[questao][aluno]);
        }
    }

    // Leitura do gabarito
    printf("\nDigite o gabarito:\n");
    for (questao = 0; questao < 10; questao++) {
        printf("Questão %d: ", questao+1);
        scanf(" %c", &gabarito[questao]);
    }

    // Correção
    for (aluno = 0; aluno < 5; aluno++) {
        for (questao = 0; questao < 10; questao++) {
            if (respostas[questao][aluno] == gabarito[questao]) {
                resultado[aluno]++;
            }
        }
    }

    // Resultado
    printf("\nPontuação dos alunos:\n");
    for (aluno = 0; aluno < 5; aluno++) {
        printf("Aluno %d: %d pontos\n", aluno+1, resultado[aluno]);
    }

    return 0;
}