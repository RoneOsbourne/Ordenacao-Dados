#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#include "exercicio1.c"
#include "exercicio2.c"
#include "exercicio3.c"
#include "exercicio4.c"
#include "exercicio5.c"
#include "exercicio6.c"
#include "exercicio7.c"

void mostraMenu() {
    printf("Ordenação\n\nInforme o exercício:\n\n");
    printf("1 - Exercício 1 - Array Randômico\n");
    printf("2 - Exercício 2 - Bubble, Selection, Insertion, Quick, TimSort\n");
    printf("3 - Exercício 3 - Estudar e Entender os Algoritmos\n");
    printf("4 - Exercício 4 - Controle Hora Inicial, Final e Duração dos Algoritmos\n");
    printf("5 - Exercício 5 - Atenção ao array Randômico em todos Algoritmos\n");
    printf("6 - Exercício 6 - Licença MIT no Github\n");
    printf("7 - Exercício 7 - Resultados em Excel\n\n");
    printf("Opção:  ");
}

int main() {
    //Configura a acentuação no C
    setlocale(LC_ALL, "Portuguese");

    mostraMenu();

    int opcao = 0;
    scanf("%d", &opcao);
    system("@cls||clear");

    switch (opcao)
    {
        case 1:
            exercicio1();
            break;
        
        case 2:
            exercicio2();
            break;
            
        case 3:
            exercicio3();
            break;
        
        case 4:
            exercicio4();
            break;

        case 5:
            exercicio5();
            break;

        case 6:
            exercicio6();
            break;

        case 7:
            exercicio7();
            break;
            
        default:
        printf("Opção inválida");
        break;
    }
}
