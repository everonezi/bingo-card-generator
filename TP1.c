#include <stdio.h>
#include <stdlib.h.>
#include <time.h>

int main(){
	
	int cartela [5][5];
	int i, j, k;
	srand (time(NULL));
	
	printf("\t\t\t\t\tBem vindo ao gerenciador de sorteios!\n");
	
	printf("\t\t\t\tDigite 1 para gerar as 10 cartelas e 0 para encerrar: ");
	int entrada = 0;
	scanf("%d", &entrada);
	
	//GERANDO AS CARTELAS
	if(entrada == 1){
		for(i=0; i<10; i++){
			for(j=0; j<5; j++){
				for(k=0; k<5; k++){
					cartela[j][k] = rand() % 99;
					
				}
			}
			
			for(j=0; j<5; j++){
				for(k=0; k<5; k++){
				if(k == 2 && j == 2 ){
					printf("\tX");
					}else{
						printf("\t%d", cartela[j][k]);
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	else{
		return 0;
	}
}
