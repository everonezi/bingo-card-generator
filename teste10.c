#include <stdio.h>
#include <time.h>

#define CARTELAS 10
#define TAMANHO 5
int main(){
	int i,j,k, cartela[5][5],num, sorteio;
	int tabela1[5][5];
	int tabela2[5][5];
	int tabela3[5][5];
	int tabela4[5][5];
	int tabela5[5][5];
	int tabela6[5][5];
	int tabela7[5][5];
	int tabela8[5][5];
	int tabela9[5][5];
	int tabela10[5][5];
	srand(time(NULL));
	int quant1 = 0, quant2 = 0, quant3=0, quant4=0, quant5=0, quant6=0, quant7=0, quant8=0, quant9=0, quant10=0;
	
	
	printf("\t\t\t\t\tBem vindo ao gerenciador de sorteios!\n");
	
	printf("\t\t\t\tDigite 1 para gerar as 10 cartelas e 0 para encerrar: ");
	int entrada = 0;
	scanf("%d", &entrada);
	
	if(entrada == 1){
        
        //GERANDO CARTELA 1
		int matriz[4][6] = {{0}};
    int aux[25]; // vetor auxiliar para armazenar os n?meros gerados
    int i, j, num, found,k;

    // inicializar o vetor auxiliar
    for (i = 0; i < 25; i++) {
        aux[i] = 0;
    }

    // gerar n?meros aleat?rios e preencher a matriz
    srand(time(NULL)); // inicializar o gerador de n?meros aleat?rios
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            do {
                num = rand() % 99 + 1; // gerar um n?mero aleat?rio entre 1 e 99
                found = 0;
                for ( k = 0; k < 25; k++) {
                    if (aux[k] == num) {
                        found = 1;
                        break;
                    }
                }
            } while (found);
            matriz[i][j] = num;
            aux[i * 5 + j] = num; // armazenar o n?mero no vetor auxiliar
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            	tabela1[i][j]=matriz[i][j];
        }
        
    }

    // imprimir cartela1
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
			printf("%d\t", tabela1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
        
   		//GERANDO CARTELA 2
   		// Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela2[j][0] == num) break;
                }
            } while (j < i);
            tabela2[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela2[j][1] == num) break;
                }
            } while (j < i);
            tabela2[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela2[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela2[j][2] == num) break;
                }
            } while (j < i);
            tabela2[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela2[j][3] == num) break;
                }
            } while (j < i);
            tabela2[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela2[j][4] == num) break;
                }
            } while (j < i);
            tabela2[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela2[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela2[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        //GERANDO CARTELA 3
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela3[j][0] == num) break;
                }
            } while (j < i);
            tabela3[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela3[j][1] == num) break;
                }
            } while (j < i);
            tabela3[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela3[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela3[j][2] == num) break;
                }
            } while (j < i);
            tabela3[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela3[j][3] == num) break;
                }
            } while (j < i);
            tabela3[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela3[j][4] == num) break;
                }
            } while (j < i);
            tabela3[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela3[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela3[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        //GERANDO CARTELA 4
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela4[j][0] == num) break;
                }
            } while (j < i);
            tabela4[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela4[j][1] == num) break;
                }
            } while (j < i);
            tabela4[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela4[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela4[j][2] == num) break;
                }
            } while (j < i);
            tabela4[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela4[j][3] == num) break;
                }
            } while (j < i);
            tabela4[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela4[j][4] == num) break;
                }
            } while (j < i);
            tabela4[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela4[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela4[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        //GERANDO CARTELA 5
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela5[j][0] == num) break;
                }
            } while (j < i);
            tabela5[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela5[j][1] == num) break;
                }
            } while (j < i);
            tabela5[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela5[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela5[j][2] == num) break;
                }
            } while (j < i);
            tabela5[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela5[j][3] == num) break;
                }
            } while (j < i);
            tabela5[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela5[j][4] == num) break;
                }
            } while (j < i);
            tabela5[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela5[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela5[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        //GERANDO CARTELA 6
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela6[j][0] == num) break;
                }
            } while (j < i);
            tabela6[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela6[j][1] == num) break;
                }
            } while (j < i);
            tabela6[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela6[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela6[j][2] == num) break;
                }
            } while (j < i);
            tabela6[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela6[j][3] == num) break;
                }
            } while (j < i);
            tabela6[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela6[j][4] == num) break;
                }
            } while (j < i);
            tabela6[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela6[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela6[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        //GERANDO CARTELA 7
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela7[j][0] == num) break;
                }
            } while (j < i);
            tabela7[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela7[j][1] == num) break;
                }
            } while (j < i);
            tabela7[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela7[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela7[j][2] == num) break;
                }
            } while (j < i);
            tabela7[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela7[j][3] == num) break;
                }
            } while (j < i);
            tabela7[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela7[j][4] == num) break;
                }
            } while (j < i);
            tabela7[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela7[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela7[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        //GERANDO CARTELA 8
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela8[j][0] == num) break;
                }
            } while (j < i);
            tabela8[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela8[j][1] == num) break;
                }
            } while (j < i);
            tabela8[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela8[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela8[j][2] == num) break;
                }
            } while (j < i);
            tabela8[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela8[j][3] == num) break;
                }
            } while (j < i);
            tabela8[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela8[j][4] == num) break;
                }
            } while (j < i);
            tabela8[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela8[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela8[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        //GERANDO CARTELA 9
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela9[j][0] == num) break;
                }
            } while (j < i);
            tabela9[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela9[j][1] == num) break;
                }
            } while (j < i);
            tabela9[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela9[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela9[j][2] == num) break;
                }
            } while (j < i);
            tabela9[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela9[j][3] == num) break;
                }
            } while (j < i);
            tabela9[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela9[j][4] == num) break;
                }
            } while (j < i);
            tabela9[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela9[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela9[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        //GERANDO CARTELA 10
        // Preencher a coluna B (1 a 15)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 1;
                for (j = 0; j < i; j++) {
                    if (tabela10[j][0] == num) break;
                }
            } while (j < i);
            tabela10[i][0] = num;
        }

        // Preencher a coluna I (16 a 30)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 16;
                for (j = 0; j < i; j++) {
                    if (tabela10[j][1] == num) break;
                }
            } while (j < i);
            tabela10[i][1] = num;
        }

        // Preencher a coluna N (31 a 45)
        for (i = 0; i < TAMANHO; i++) {
            if (i == 2) {  // Espa?o livre no meio da cartela
                tabela10[i][2] = 0;
                continue;
            }
            do {
                num = rand() % 15 + 31;
                for (j = 0; j < i; j++) {
                    if (tabela10[j][2] == num) break;
                }
            } while (j < i);
            tabela10[i][2] = num;
        }

        // Preencher a coluna G (46 a 60)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 46;
                for (j = 0; j < i; j++) {
                    if (tabela10[j][3] == num) break;
                }
            } while (j < i);
            tabela10[i][3] = num;
        }

        // Preencher a coluna O (61 a 75)
        for (i = 0; i < TAMANHO; i++) {
            do {
                num = rand() % 15 + 61;
                for (j = 0; j < i; j++) {
                    if (tabela10[j][4] == num) break;
                }
            } while (j < i);
            tabela10[i][4] = num;
        }
		
		for (i = 0; i < TAMANHO; i++) {
            for (j = 0; j < TAMANHO; j++) {
                if (tabela10[i][j] == 0)
                    printf(" * ");
                else
                    printf("%2d ", tabela10[i][j]);
            }
            printf("\n");
        }
        printf("\n");	
		
		printf("Digite 1 para fazer o sorteio completo dos numeros e obter a cartela vencedora ou Digite 2 para fazer o sorteio numero a numero: ");
		entrada = 0;
		scanf("%d", &entrada);
		
		if(entrada == 1){
			printf("numeros sorteados:\n");
	
			while(quant1 < 25 || quant2 < 25 || quant3 < 25 || quant4<25 || quant5<25 || quant6<25 || quant7<25 || quant8<25 || quant9<25 || quant10<25 ){
			sorteio = (rand() %99) + 1;
		
			printf("%d\t", sorteio);
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela1[i][j]){
						quant1++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela2[i][j]){
						quant2++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela3[i][j]){
						quant3++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela4[i][j]){
						quant4++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela5[i][j]){
						quant5++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela6[i][j]){
						quant6++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela7[i][j]){
						quant7++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela8[i][j]){
						quant8++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela9[i][j]){
						quant9++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela10[i][j]){
						quant10++;
					} 
				}
			}
		}
	
		if(quant1 == 25){
			printf("\n\ntabela 1 venceu!!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela1[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela1[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if (quant2 == 25){
			printf("\n\ntabela 2 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela2[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela2[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant3 == 25){
			printf("\n\ntabela 3 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela3[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela3[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant4 == 25){
			printf("\n\ntabela 4 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela4[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela4[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant5 == 25){
			printf("\n\ntabela 5 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela5[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela5[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant6 == 25){
			printf("\n\ntabela 6 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela6[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela6[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant7==25){
			printf("\n\ntabela 7 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela7[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela7[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant8 == 25){
			printf("\n\ntabela 8 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela8[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela8[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant9 == 25){
			printf("\n\ntabela 9 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela9[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela9[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant10 == 25){
			printf("\n\ntabela 10 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela10[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela10[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}
	}	else{
	
	printf("Numeros sorteados:\n");
	while(quant1 < 25 || quant2 < 25 || quant3 < 25 || quant4<25 || quant5<25 || quant6<25 || quant7<25 || quant8<25 || quant9<25 || quant10<25 ){
		sorteio = (rand() %99) + 1;
		
		printf("\n%d\t", sorteio);
		system("pause");
		for(i=0; i<5; i++){
			for(j=0; j<5; j++){
				if(sorteio == tabela1[i][j]){
				quant1++;
					} 
				}
			}
				
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela2[i][j]){
						quant2++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela3[i][j]){
						quant3++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela4[i][j]){
						quant4++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela5[i][j]){
						quant5++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela6[i][j]){
						quant6++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela7[i][j]){
						quant7++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela8[i][j]){
						quant8++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela9[i][j]){
						quant9++;
					} 
				}
			}
			for(i=0; i<5; i++){
				for(j=0; j<5; j++){
					if(sorteio == tabela10[i][j]){
						quant10++;
					} 
				}
			}
		}
	}
	if(quant1 == 25){
			printf("\n\ntabela 1 venceu!!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela1[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela1[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if (quant2 == 25){
			printf("\n\ntabela 2 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela2[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela2[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant3 == 25){
			printf("\n\ntabela 3 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela3[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela3[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant4 == 25){
			printf("\n\ntabela 4 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela4[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela4[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant5 == 25){
			printf("\n\ntabela 5 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela5[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela5[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant6 == 25){
			printf("\n\ntabela 6 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela6[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela6[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant7==25){
			printf("\n\ntabela 7 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela7[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela7[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant8 == 25){
			printf("\n\ntabela 8 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela8[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela8[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant9 == 25){
			printf("\n\ntabela 9 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela9[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela9[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}else if(quant10 == 25){
			printf("\n\ntabela 10 venceu !!!\n\n");
			for (i = 0; i < 5; i++) {
            	for (j = 0; j < 5; j++) {
                	if (tabela10[i][j] == 0)
                    	printf(" * ");
                	else
                    	printf("%2d ", tabela10[i][j]);
            	}
            	printf("\n");
        	}
        	printf("\n");
		}
	}}



