#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//#include <iostream>
void selecao(int vet[], int n){

    int menor, aux;

    for(int i=0; i < n-1; i++){
        menor = i;
        for(int j = i+1; j < n; j++){
            if(vet[menor] > vet[j])
                menor=j;
        }
        if(i!=menor){
            aux=vet[i];
            vet[i]=vet[menor];
            vet[menor]=aux;
        }
    }

}
int main()
{   printf("================= ORDENACAO DE DADOS METODO SELECTION SORT ===================\n");
    int n = 9;

    printf("\nNumeros aleatorios nao ordenados\n");
    printf("\n");

    srand(time(NULL));
    for(int i = 0; i < 9; i++){
              int vetor1[9];
           vetor1[i] = rand() % 100;

           printf("%d ", vetor1[i]);

    }
      printf("\n");
    printf("\nNumeros pre fixados ordenados");

    int vetor[9] = {3,6,5,1,2,8,7,9,4};

    selecao(vetor, n);

    printf("\n\n");
//==================== IMPRIME O VETOR ORDENADO ====================
    for(int i=0; i < n; i++){
            printf("%d  ", vetor[i]);
    }
    
    printf("\n\n\n");
    
    clock_t tempo;
	tempo = clock();

    // código de teste
	for(int i = 0; i < 99999999; ++i){}
	//fim
	printf("Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);

	printf("\n\n\n");

    system("pause");

    return 0;
}
