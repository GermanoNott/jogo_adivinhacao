#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf(" ___                   \n");
    printf("|[_]|                  \n");
    printf("|+ ;| Bem vindo ao jogo\n");
    printf("`---'                  \n");
    printf("\n");

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;

    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;
    int nivel;
    printf("Selecione o nível\n");
    printf("(1)Fácil (2)Médio (3)Dificil\n");
    scanf("%d", &nivel);
    int numeroTentativas;
    switch (nivel)
    {
    case 1:
        numeroTentativas = 20;
        break;
    case 2:
        numeroTentativas = 15;
        break;
    default:
        numeroTentativas = 6;
        break;
    }

    for (int i = 1; i <= numeroTentativas; i++)
    {
        printf("Tentativa %d \n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        if (chute < 0)
        {
            printf("Você não pode digitar números negativos\n");
            continue;
        }

        acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if (acertou)
        {
            break;
        }
        else if (maior)
        {
            printf("Seu chute foi maior que o número secreto\n");
        }
        else
        {
            printf("Seu chute foi menor que o número secreto\n");
        }
        tentativas++;
        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
        pontos = pontos - pontosPerdidos;
    }
    printf("FIM DE JOGO!\n");
    if (acertou)
    {
        printf("                    *****************                       \n");
        printf("               ******               ******                  \n");
        printf("           ****                           ****              \n");
        printf("        ****                                 ***            \n");
        printf("      ***                                       ***         \n");
        printf("     **           ***               ***           **        \n");
        printf("   **           *******           *******          ***      \n");
        printf("  **            *******           *******            **     \n");
        printf(" **             *******           *******             **    \n");
        printf(" **               ***               ***               **    \n");
        printf("**                                                     **   \n");
        printf("**       *                                     *       **   \n");
        printf("**      **                                     **      **   \n");
        printf(" **   ****                                     ****   **    \n");
        printf(" **      **                                   **      **    \n");
        printf("  **       ***                             ***       **     \n");
        printf("   ***       ****                       ****       ***      \n");
        printf("     **         ******             ******         **        \n");
        printf("      ***            ***************            ***         \n");
        printf("        ****                                 ****           \n");
        printf("           ****                           ****              \n");
        printf("               ******               ******                  \n");
        printf("                    *****************                       \n");
        printf("\n");
        printf("Parabéns!! Você acertou!\n");
        printf("Você acertou em %d tentativas\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    }
    else
    {
        printf("                       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶         \n");
        printf("                    ¶¶¶                   ¶¶¶¶     \n");
        printf("                ¶¶¶                         ¶¶¶¶   \n");
        printf("              ¶¶                              ¶¶¶  \n");
        printf("           ¶¶¶                                 ¶¶¶ \n");
        printf("         ¶¶                                     ¶¶¶\n");
        printf("        ¶¶         ¶¶¶¶¶           ¶¶¶¶¶         ¶¶\n");
        printf("      ¶¶          ¶¶¶¶¶¶          ¶¶¶¶¶¶         ¶¶\n");
        printf("     ¶¶           ¶¶¶¶            ¶¶¶¶           ¶¶\n");
        printf("    ¶¶                                           ¶¶\n");
        printf("   ¶¶                                           ¶¶ \n");
        printf("  ¶¶                    ¶¶¶¶                    ¶¶ \n");
        printf(" ¶¶               ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶              ¶¶  \n");
        printf(" ¶¶            ¶¶¶¶           ¶¶¶¶¶           ¶¶   \n");
        printf("¶¶¶         ¶¶¶                  ¶¶          ¶¶    \n");
        printf("¶¶         ¶                      ¶¶        ¶¶     \n");
        printf("¶¶¶      ¶                        ¶¶       ¶¶      \n");
        printf("¶¶¶     ¶                         ¶¶     ¶¶        \n");
        printf(" ¶¶¶                                   ¶¶          \n");
        printf("  ¶¶¶                                ¶¶            \n");
        printf("   ¶¶¶                            ¶¶               \n");
        printf("    ¶¶¶¶                      ¶¶¶                  \n");
        printf("       ¶¶¶¶¶             ¶¶¶¶¶                     \n");
        printf("\n");
        printf("Você perdeu. Tente de novo!");
    }
}