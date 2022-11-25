#include <stdio.h>
#include <conio.h>

float media(){ //Procedimento
    float n1 = 0, n2 = 0, m = 0;

    printf("Nota da primeira prova: ");
    scanf("%f", &n1);

    printf("Nota da segunda prova: ");
    scanf("%f", &n2);

    m = (n1 + n2)/2;
    printf("\n\nMedia= %6.2f\n", m);
} 

int main(){
media();
getch();
}
