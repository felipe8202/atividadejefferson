#include <stdio.h>
int main (void) {
	printf("Use 1 para SIM e 0 para NAO. \n");
	
	float compromisso, naCidade, dinheiro, chovendo, perto;
	
	printf("Tenho compromisso no dia? \n");
	scanf("%f", &compromisso);
	
	printf("Vou estar na cidade? \n");
	scanf("%f", &naCidade);
	
	printf("Tenho dinheiro? \n");
	scanf("%f", &dinheiro);
	
	printf("Esta chovendo? \n");
	scanf("%f", &chovendo);
	
	printf("E perto? \n");
	scanf("%f", &perto);
	
	if (compromisso == 0 && naCidade == 1 && dinheiro == 1 && chovendo == 0 && perto == 1)
	   printf("Eu vou!\n");
	else
	   printf("Voce nao deve ir ao passeio.\n"); 
	   
    return 0;	   
}
