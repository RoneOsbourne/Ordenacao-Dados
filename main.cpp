#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

void bubble(int vetor[],int n){
    int k = n;
    int aux;
    for(int i=0; i<n; i++){
        for(int j=0;j<k;j++){
            if(vetor[j] > vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
        k--;
    }
 }

int vetor1[10];
int main()
{
    printf("\n================= ORDENACAO DE DADOS METODO BUBBLE SORT ===================\n\n");

     printf("\tNUMEROS PRE FIXADOS DESORDENADOS\n");

    int vetor[10] = {3,5,8,1,9,2,4,7,0,6};
    int n=10;

      printf("\n\t");
    for(int i =0; i<n; i++){
         printf("%d ", vetor[i]);

    }
     printf("\n\n\tNUMEROS PRE FIXADOS ORDENADOS\n");
    bubble(vetor,n);

    printf("\n\n\t");
    for(int i =0; i<n; i++){
         printf("%d ", vetor[i]);

    }
     printf("\n\n");
     printf("\n================ NUMEROS ALEATORIOS ========================\n");
     printf("\n\n");

     printf("\tNUMEROS ALEATORIOS DESORDENADOS");
     printf("\n\n\t");

    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        vetor1[i] = { rand() % 50};
        printf("%d ", vetor1[i]);

   }


     printf("\n\n");

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
