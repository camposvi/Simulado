#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>



float maiorMenorMeioR(int n1, int n2, int n3){
	float media = 0.0, raizq;
	int maior = 0, meio = 0, menor = 0;
	
	if ((n1 > n2) && (n2 > n3)){
		maior = n1;
		meio = n2;
		menor = n3;
		
	}else if ((n2 > n3) && (n3 > n1)){
		maior = n2;
		meio = n3;
		menor = n1;
		
	}else if ((n3 > n1) && (n1 > n2)){
		maior = n3;
		meio =  n1;
		menor = n2;
		
	}else if ((n3 > n2) && (n2 > n1)){
		maior = n3;
		meio = n2;
		menor = n1;
		
	}
	printf("O maior valor é : %d , o valor do meio é : %d , o menor valor é : %d .",maior,meio,menor);
	media = (n1 + n2 + n3)/3;	
	raizq = sqrt(media);
	return raizq;

}
	

	int main(){
		float raizq;
		int n1 = 0,n2 = 0, n3 = 0;
		char resp[30];

		setlocale(LC_ALL, "Portuguese");

		numero1:
			printf("Digite o primeiro número : ");	
			scanf("%d",&n1);
			if ((n1 <= 0) || (n1 % 3 != 0) && (n1 % 6 != 0)){
				
					printf("O valor não é múltiplo de três ou seis. Tente novamente. \n ");
					goto numero1;
			}
		
		  
		numero2:
			printf("Digite o segundo número : ");
			scanf("%d",&n2);
			if ((n2 <= 0)  || (n2 % 2 != 0)  || (n2 == n1) || (n2 < n1)){

					printf("O valor não é par ou nao é um múltiplo de dois. Tente novamente. \n");
					goto numero2;	
			}
		
		numero3:
			printf("Digite o terceiro número : ");
			scanf("%d",&n3);
			if ((n3 <= 0)  || (n3 % 2 == 0) || (n3 < 22 && n3 < 145) || (n3 == n1) || (n3 == n2) || (n2 > n3)){
			
			

					printf("O valor não é impar e nao está no intervalo de 21 à 145. Tente novamente. \n");
					goto numero3;
				}
			
			
		
		raizq = maiorMenorMeioR(n1,n2,n3);
		printf(" \n O valor da Raiz quadrada é : %.2f",raizq);	
		printf ("\n Deseja sair do programa ? (SIM/NAO)");
		scanf("%s",&resp);
		if (strcmp(resp,"SIM")==0){
			system("pause");
		}else{
			system("cls");
			goto numero1;
		}
	return 0;	

}
 		

