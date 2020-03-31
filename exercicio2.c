void exercicio2() {
    printf("Exercício 2 - ");
    printf("Programa Bubble, Selection, Insertion, Quick, TimSort\n\n");

void bubble(int vetor[],int n){
    int k = n;
    int aux, i, j;
    
    for(i=0; i<n; i++){
        for(j=0;j<k;j++){
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
{
	
    printf("\n================= ORDENACAO DE DADOS METODO BUBBLE SORT ===================\n\n");

     printf("\tNUMEROS PRE FIXADOS DESORDENADOS\n");

    int vetor[10] = {3,5,8,1,9,2,4,7,0,6};
    int n=10;
    int i;

    printf("\n");
    for(i =0; i<n; i++){
    	printf("%d ", vetor[i]);

    }
    printf("\n\n\tNUMEROS PRE FIXADOS ORDENADOS\n");
    bubble(vetor,n);

    printf("\n\n");
    for(i =0; i<n; i++){
        printf("%d ", vetor[i]);

    }
     printf("\n\n");
     printf("\n================ NUMEROS ALEATORIOS ========================\n");
     printf("\n\n");

     printf("\tNUMEROS ALEATORIOS DESORDENADOS");
     printf("\n\n");
    
	printf("\n");
    void select(int vet[], int n){

    int menor, aux, i, j;

    for(i=0; i < n-1; i++){
        menor = i;
        for(j = i+1; j < n; j++){
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

{   printf("\n================= ORDENACAO DE DADOS METODO SELECTION SORT ===================\n");
    int n = 9;
    int i;

    printf("\nNumeros aleatorios nao ordenados\n");
    printf("\n");
    
    printf("\n");
    printf("\nNumeros pre fixados ordenados");

    int vetor[9] = {3,6,5,1,2,8,7,9,4};

    select(vetor, n);

    printf("\n\n");
    
//==================== IMPRIME O VETOR ORDENADO ====================

    for(i=0; i < n; i++){
            printf("%d  ", vetor[i]);
    }
    
    printf("\n\n\n");
    
	}
}
int vetor[10];
void insertion(int vet[], int n)
{

    int j, num_atual;
	int i;

       for(i =1; i < 10; i++)
        {
            num_atual = vet[i];
            j = i -1;

            while((j >= 0) && (num_atual < vet[j]))
            {
                 vet[j+1] = vet[j];
                 j--;
            }
            vet[j+1] = num_atual;
       }

}

{
    printf("\n================= ORDENACAO DE DADOS METODO INSERTION SORT ===================\n");

      int n = 10;

   printf("\n\t\t IMPRIME VETOR DESORDENADO \n\n");
    printf("\n\t\t");
    
    insertion(vetor, n);

    //printf("\n\n");
    printf("\n\n\t\t IMPRIME VETOR ORDENADO \n\n");
     printf("\n\t\t");
//==================== IMPRIME O VETOR ORDENADO ====================
    int i;
	
	for(i=0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    clock_t tempo;
	tempo = clock();

    // código de teste
	for(i = 0; i < 99999999; ++i){}
	//fim
	printf("Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);

	  printf("\n\n\n");

	}
}
