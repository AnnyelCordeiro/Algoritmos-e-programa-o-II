#include <stdio.h>
#define MAX 20

int main() {
	char palavra[MAX];
	int i = 0;
	scanf("%[^\n]s", palavra);
	while (palavra[i] != '\0'){
		if (palavra[i] >= 97 && palavra[i] <= 122){
			palavra[i] = palavra[i] - 32;
			
		}
		i++;
	}
	printf("\n%s ", palavra);
	return 0;
}