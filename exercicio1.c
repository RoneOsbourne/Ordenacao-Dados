void exercicio1() {
    printf("\nExerc�cio 1 - ");
    printf("Gerar um array de 'n' elementos inteiros com valores rand�micos em cada posi��o\n\n");

     printf("\n================ NUMEROS ALEATORIOS ========================\n");
     printf("\n\n");

	int i;
	
    srand(time(NULL));
    for(i = 0; i < 10; i++){
    	printf("%d ", rand()%50);

   }

     printf("\n\n");

    clock_t tempo;
	tempo = clock();

    // c�digo de teste
	for(i = 0; i < 99999999; ++i){}
	//fim
	printf("Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);

	  printf("\n\n\n");

    system("pause");
    
}
