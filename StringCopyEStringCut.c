#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
	char a[MAX], b[MAX], c[MAX * 2];
	int fine, scelta;
	
	fine = 0;
	scelta = 0;
	
	printf("Inserisci la prima stringa: ");
	gets(a);
	printf("Inserisci la seconda stringa: ");
	gets(b);
	
	do{
		printf("String Copy (1) oppure String Cut (2) (Inserire -1 per terminare)?\n");
		scanf("%d", &scelta);
		
		switch(scelta){
			case 1:
				strcpy(c, a);
				strcpy(c, b);
				puts(c);
				break;
			case 2:
				strcat(c, a);
				strcat(c, b);
				puts(c);
				break;
			case -1:
				printf("FINE\n");
				fine = 1;
				break;
			default:
				printf("Input non valido!\n");
				break;
		}
	}while(fine == 0);
	
	return 0;
}
