#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int programaa() {
	float n1, n2, n3, soma; 
	
    printf("digite o primeiro numero: ");
    scanf("%f",&n1);
	printf("digite o segundo numero: ");
    scanf("%f",&n2);
    printf("digite o terceiro numero: ");
    scanf("%f",&n3);
    soma = n1 + n2 + n3;
    
    return soma;
}

int progrmab() {
	float media;
	
	media = (programaa) / 3;
	
	return media;
}

int main() {
          
   // int total = impares + pares;       
	pid_t pid = fork ();
	if (pid < 0) {
		perror ("erro no fork");
		exit(1); 
	}  
	
	if (pid == 0) { // processo filho
		float mediaari = progrmab();
		printf("media aritimetica", mediaari);
	}
	else { // processo pai
		int soman = programaa(); 
		printf("Soma dos numeros", soman);
	}
    
   

}

