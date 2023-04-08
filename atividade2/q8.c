/*8. Faça um programa que armazene em um vetor 10 números inteiros entre 1 e 20 informados
pelo usuário e imprima um histograma desses números de acordo a seguinte formatação:*/



    #include <stdio.h>

int main(){
	int n[10], i = 0,j = 0,x= 0;
	
	for(j = 0; j < 10; j++){
		scanf("%d", &n[j]);
		printf("\n");
	}
	printf("elemento             valor\n");
	
	for(x = 0;x < 10;x++){
		
		printf("%8d        %8d        ", x, n[x]);
		for(i = 0; n[x] != i;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}