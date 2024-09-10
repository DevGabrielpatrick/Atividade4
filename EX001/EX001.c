int main(){

    float numeros[2];
    
    int i;
    
    for (i = 0; i<2;i++){
    	
    printf("Digite o numero %d:", i + 1);
    scanf("%f", &numeros [i]);
	}
	if (numeros[0]<numeros[1]){
	printf("o maior numero e: %f", numeros [0]);
	}else {
	printf("o menor numero e: %f", numeros [1]);
	}
}