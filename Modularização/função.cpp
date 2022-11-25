#include <stdio.h>
#include <conio.h>

float media(float n1, float n2){
    float m = 0;
    m = (n1 + n2)/2;
    return m;
}

int main(){
    float num1 = 0, num2 = 0;

    printf("Digite nota 1: ");
    scanf("%f", &num1);

    printf("Digite nota 2: ");
    scanf("%f", &num2);

    printf("\n\nMedia =%6.2f", media(num1, num2));

    getch();
}