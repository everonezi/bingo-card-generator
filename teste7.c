#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARTELAS 10
#define TAMANHO 5

int main() {
    srand(time(NULL));
    int cartela[TAMANHO][TAMANHO];
    int num, i, j, k, l, m;

    for (k = 0; k < CARTELAS; k++) {
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (cartela[j][0] == num) break;
                }
            } while (j < i);
            cartela[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (cartela[j][1] == num) break;
                }
            } while (j < i);
            cartela[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espaço livre no meio da cartela
                cartela[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (cartela[j][2] == num) break;
                }
            } while (j < i);
            cartela[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (cartela[j][3] == num) break;
                }
            } while (j < i);
            cartela[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (cartela[j][4] == num) break;
                }
            } while (j < i);
            cartela[i][4] = num;
        }

        // Imprimir a cartela
        printf("Cartela %d:\n", k + 1);
        printf(" B  I  N  G  O\n");
        for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (cartela[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", cartela[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

