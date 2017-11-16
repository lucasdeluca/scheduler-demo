#include <stdio.h>

int main() {
  int a[5];
  int n, i, j;
  char posicao[5];
  char flag;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
  
  for (i=0; i<5; i++){
  	posicao[i] = 1;
  }

  for (j=0; j<n; j++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
  
	if (a[0] == posicao[0]){
		printf("0");
		flag = 1;
		posicao[0] = 0;	
	}

	if (a[1] == posicao[1]){
		printf("1");
		flag = 1;
		posicao[1] = 0;	
	}

	if (a[2] == posicao[2]){
		printf("2");
		flag = 1;
		posicao[2] = 0;	
	}

	if (a[3] == posicao[3]){
		printf("3");
		flag = 1;
		posicao[3] = 0;	
	}

	if (a[4] == posicao[4]){
		printf("4");
		flag = 1;
		posicao[4] = 0;	
	}

	if (flag == 0){
		printf("-");	
	}

	printf("\n");

	flag = 0;

	for (i=0; i<5; i++){
		posicao[i] = posicao[i] + 1;	
	}
  }

  return 0;
}
