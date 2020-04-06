/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>*/
#include<bits/stdc++.h> // com o uso desta biblioteca que � uma coletanea se torna dispensavel o uso das bibliotecas acima!

#include "exercicio1.cpp"
#include "exercicio2.cpp"
#include "exercicio3.cpp"
#include "exercicio4.cpp"
#include "exercicio5.cpp"
#include "exercicio6.cpp"
#include "exercicio7.cpp"

void mostraMenu() {
    printf("Ordena��o\n\nInforme o exerc�cio:\n\n");
    printf("1 - Exerc�cio 1 - Array Rand�mico\n");
    printf("2 - Exerc�cio 2 - Bubble, Selection, Insertion, Quick, TimSort\n");
    printf("3 - Exerc�cio 3 - Estudar e Entender os Algoritmos\n");
    printf("4 - Exerc�cio 4 - Controle Hora Inicial, Final e Dura��o dos Algoritmos\n");
    printf("5 - Exerc�cio 5 - Aten��o ao array Rand�mico em todos Algoritmos\n");
    printf("6 - Exerc�cio 6 - Licen�a MIT no Github\n");
    printf("7 - Exerc�cio 7 - Resultados em Excel\n\n");
    printf("Op��o:  ");
}

int main() {
    //Configura a acentua��o no C
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
        printf("Op��o inv�lida");
        break;
    }
}
