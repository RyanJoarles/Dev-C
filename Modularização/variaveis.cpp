#include <stdio.h>
#include <conio.h>

// Declaração de variáveis globais
float nota1, nota2;

// Parâmetros formais
float media(float x, float y){
    return((x + y)/2);
}
int main(void){
    // Variável local
    float v_media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    // Usando variáveis globais: nota1, nota2 e variável local: v_media
    v_media = media(nota1, nota2);
    printf("\nNota media do aluno: %.2f\n", v_media);

    return 0;
}