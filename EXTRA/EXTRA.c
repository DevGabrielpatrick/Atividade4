#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3,media;
	
	printf("Digite a nota do trabalho em laboratorio: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota da Avaliacao Semestre: ");
	scanf("%f", &nota2);
	
	printf("digite a nota do Exame Final: ");
	scanf("%f", &nota3);
	
	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10;
	


	
	if(media>= 8 && media <=10){
		printf("nota final %.2f e o conceito da sua nota é A",media);
	}
	else if(media>= 7 && media <=7.99){
		printf("nota final %.2f e o conceito da sua nota é B",media);
	}
	else if(media>= 6 && media <=6.99){
		printf("nota final %.2f e o conceito da sua nota é C",media);
	}
	
	else if(media>= 5 && media <=5.99){
		printf("nota final %.2f e o conceito da sua nota é D",media);
	}
	
	else if(media>= 0 && media <=4.99){
		printf("nota final %.2f e o conceito da sua nota é E",media);
	}
	
	
	
	return 0;
}