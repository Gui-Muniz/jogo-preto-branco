#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	
	int i, j, l, c, P, lP, cP,contB;
	
	printf("Quantas linhas? ");
	scanf("%d", &l);
	printf("Quantas colunas? ");
	scanf("%d", &c);
	
	char PeB [l][c];
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			PeB[i][j] = ' ';
		}
	}
	
	system("cls");
	
	printf("Quantas peças pretas? ");
	scanf("%d", &P);
	
	system("cls");
	
	for(i = 0; i < P; i++){
		printf("Qual a linha? ");
		scanf("%d", &lP);
		
		printf("Qual a coluna? ");
		scanf("%d", &cP);
		
		system("cls");
		
		while(lP < 1 || cP < 1 || lP > l || cP > c){
			printf("O número digitado não é válido! Por favor, tente novamente!\n");
			
			printf("Qual a linha? ");
			scanf("%d", &lP);
			
			printf("Qual a coluna? ");
			scanf("%d", &cP);
			
			system("cls");
		}
		
		while(PeB[lP - 1][cP - 1] != ' '){
			printf("Está casa já está ocupada! Por favor, tente novamente!\n");
			
			printf("Qual a linha? ");
			scanf("%d", &lP);
		
			printf("Qual a coluna? ");
			scanf("%d", &cP);
		
			system("cls");
		}
		
		PeB[lP - 1][cP - 1] = 'P';
	}
	
	contB = 0;
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			if(PeB[i][j] == ' '){
				if(PeB[i][j - 1] == 'P' || PeB[i][j + 1] == 'P' || PeB[i - 1][j] == 'P' || PeB[i + 1][j] == 'P'){
					if(PeB[i][j - 1] != 'B' && PeB[i][j + 1] != 'B' && PeB[i - 1][j] != 'B' && PeB[i + 1][j] != 'B'){
						PeB[i][j] = 'B';
						contB++;
					}	
				} 		
			}
		}
	}
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf(" %c ", PeB[i][j]);
		}
		printf("\n");
	}
	
	printf("%d", contB);
}
	
	
	 
	

